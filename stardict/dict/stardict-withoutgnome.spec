%define name	stardict
%define version 3.0.5

Name:		%{name}
Summary: 	A powerful dictionary platform written in GTK
Version:	%{version}
Release:	1%{?dist}
Group: 		Applications/System
License: 	GPLv3
URL: 		http://www.stardict.org
Source0:	http://stardict-3.googlecode.com/files/%{name}-%{version}.tar.bz2
BuildRoot:	%{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

Requires: gtk2, enchant, espeak, libsigc++20 >= 2.0.17
#Requires: gucharmap, festival, speech-tools

BuildRequires: desktop-file-utils, gettext, intltool
BuildRequires: gtk2-devel, libsigc++20-devel, enchant-devel, espeak-devel
#BuildRequires: gucharmap-devel, festival-devel, speech-tools-devel


%description
StarDict is a Cross-Platform and international dictionary written in Gtk.
It has powerful features such as "Glob-style pattern matching,"
"Scan selection word," "Fuzzy query," etc.

%prep
%setup -q

%build
%configure --disable-gnome-support --disable-schemas-install --disable-gucharmap --disable-dictdotcn --disable-festival --disable-tools
make -k %{_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT INSTALL="install -p" install
rm -f `find $RPM_BUILD_ROOT%{_libdir}/stardict/plugins -name "*.la"`
%find_lang %{name}

%clean
rm -rf $RPM_BUILD_ROOT


%files -f %{name}.lang
%defattr(-, root, root)
%{_bindir}/stardict
%{_datadir}/applications/*.desktop
%{_datadir}/stardict
%{_libdir}/stardict
%{_datadir}/pixmaps/stardict.png
%{_mandir}/man1/*
%doc dict/README COPYING dict/ChangeLog dict/AUTHORS dict/doc/FAQ dict/doc/HACKING dict/doc/HowToCreateDictionary dict/doc/StarDictFileFormat dict/doc/Translation


%post

%postun

