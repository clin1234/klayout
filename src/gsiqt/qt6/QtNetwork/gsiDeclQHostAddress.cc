
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQHostAddress.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHostAddress>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHostAddress

//  Constructor QHostAddress::QHostAddress()


static void _init_ctor_QHostAddress_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress *> (new QHostAddress ());
}


//  Constructor QHostAddress::QHostAddress(quint32 ip4Addr)


static void _init_ctor_QHostAddress_1098 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ip4Addr");
  decl->add_arg<quint32 > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_1098 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint32 arg1 = gsi::arg_reader<quint32 >() (args, heap);
  ret.write<QHostAddress *> (new QHostAddress (arg1));
}


//  Constructor QHostAddress::QHostAddress(const QString &address)


static void _init_ctor_QHostAddress_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QHostAddress *> (new QHostAddress (arg1));
}


//  Constructor QHostAddress::QHostAddress(const QHostAddress &copy)


static void _init_ctor_QHostAddress_2518 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("copy");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_2518 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  ret.write<QHostAddress *> (new QHostAddress (arg1));
}


//  Constructor QHostAddress::QHostAddress(QHostAddress::SpecialAddress address)


static void _init_ctor_QHostAddress_3172 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return_new<QHostAddress> ();
}

static void _call_ctor_QHostAddress_3172 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & >() (args, heap);
  ret.write<QHostAddress *> (new QHostAddress (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// void QHostAddress::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->clear ();
}


// bool QHostAddress::isBroadcast()


static void _init_f_isBroadcast_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBroadcast_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isBroadcast ());
}


// bool QHostAddress::isEqual(const QHostAddress &address, QFlags<QHostAddress::ConversionModeFlag> mode)


static void _init_f_isEqual_c6692 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QHostAddress & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QHostAddress::TolerantConversion");
  decl->add_arg<QFlags<QHostAddress::ConversionModeFlag> > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isEqual_c6692 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  QFlags<QHostAddress::ConversionModeFlag> arg2 = args ? gsi::arg_reader<QFlags<QHostAddress::ConversionModeFlag> >() (args, heap) : gsi::arg_maker<QFlags<QHostAddress::ConversionModeFlag> >() (QHostAddress::TolerantConversion, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isEqual (arg1, arg2));
}


// bool QHostAddress::isGlobal()


static void _init_f_isGlobal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isGlobal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isGlobal ());
}


// bool QHostAddress::isInSubnet(const QHostAddress &subnet, int netmask)


static void _init_f_isInSubnet_c3177 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subnet");
  decl->add_arg<const QHostAddress & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("netmask");
  decl->add_arg<int > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isInSubnet_c3177 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isInSubnet (arg1, arg2));
}


// bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> &subnet)


static void _init_f_isInSubnet_c3636 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subnet");
  decl->add_arg<const QPair<QHostAddress, int> & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isInSubnet_c3636 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPair<QHostAddress, int> &arg1 = gsi::arg_reader<const QPair<QHostAddress, int> & >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isInSubnet (arg1));
}


// bool QHostAddress::isLinkLocal()


static void _init_f_isLinkLocal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLinkLocal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isLinkLocal ());
}


// bool QHostAddress::isLoopback()


static void _init_f_isLoopback_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLoopback_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isLoopback ());
}


// bool QHostAddress::isMulticast()


static void _init_f_isMulticast_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMulticast_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isMulticast ());
}


// bool QHostAddress::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isNull ());
}


// bool QHostAddress::isSiteLocal()


static void _init_f_isSiteLocal_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSiteLocal_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isSiteLocal ());
}


// bool QHostAddress::isUniqueLocalUnicast()


static void _init_f_isUniqueLocalUnicast_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUniqueLocalUnicast_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHostAddress *)cls)->isUniqueLocalUnicast ());
}


// bool QHostAddress::operator !=(const QHostAddress &address)


static void _init_f_operator_excl__eq__c2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator != (arg1));
}


// bool QHostAddress::operator !=(QHostAddress::SpecialAddress address)


static void _init_f_operator_excl__eq__c3172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator != (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// bool QHostAddress::operator ==(const QHostAddress &address)


static void _init_f_operator_eq__eq__c2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator == (arg1));
}


// bool QHostAddress::operator ==(QHostAddress::SpecialAddress address)


static void _init_f_operator_eq__eq__c3172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->operator == (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// QHostAddress &QHostAddress::operator=(const QHostAddress &other)


static void _init_f_operator_eq__2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<QHostAddress & > ();
}

static void _call_f_operator_eq__2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  ret.write<QHostAddress & > ((QHostAddress &)((QHostAddress *)cls)->operator= (arg1));
}


// QHostAddress &QHostAddress::operator=(QHostAddress::SpecialAddress address)


static void _init_f_operator_eq__3172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return<QHostAddress & > ();
}

static void _call_f_operator_eq__3172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & >() (args, heap);
  ret.write<QHostAddress & > ((QHostAddress &)((QHostAddress *)cls)->operator= (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref()));
}


// QHostAddress::NetworkLayerProtocol QHostAddress::protocol()


static void _init_f_protocol_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QHostAddress::NetworkLayerProtocol > ();
}

static void _call_f_protocol_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHostAddress::NetworkLayerProtocol > ((QHostAddress::NetworkLayerProtocol)((QHostAddress *)cls)->protocol ());
}


// QString QHostAddress::scopeId()


static void _init_f_scopeId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_scopeId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QHostAddress *)cls)->scopeId ());
}


// void QHostAddress::setAddress(quint32 ip4Addr)


static void _init_f_setAddress_1098 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ip4Addr");
  decl->add_arg<quint32 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAddress_1098 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint32 arg1 = gsi::arg_reader<quint32 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->setAddress (arg1);
}


// bool QHostAddress::setAddress(const QString &address)


static void _init_f_setAddress_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setAddress_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QHostAddress *)cls)->setAddress (arg1));
}


// void QHostAddress::setAddress(QHostAddress::SpecialAddress address)


static void _init_f_setAddress_3172 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("address");
  decl->add_arg<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAddress_3172 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHostAddress::SpecialAddress>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->setAddress (qt_gsi::QtToCppAdaptor<QHostAddress::SpecialAddress>(arg1).cref());
}


// void QHostAddress::setScopeId(const QString &id)


static void _init_f_setScopeId_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScopeId_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->setScopeId (arg1);
}


// void QHostAddress::swap(QHostAddress &other)


static void _init_f_swap_1823 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QHostAddress & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1823 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QHostAddress &arg1 = gsi::arg_reader<QHostAddress & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHostAddress *)cls)->swap (arg1);
}


// quint32 QHostAddress::toIPv4Address(bool *ok)


static void _init_f_toIPv4Address_c1050 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ok", true, "nullptr");
  decl->add_arg<bool * > (argspec_0);
  decl->set_return<quint32 > ();
}

static void _call_f_toIPv4Address_c1050 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool *arg1 = args ? gsi::arg_reader<bool * >() (args, heap) : gsi::arg_maker<bool * >() (nullptr, heap);
  ret.write<quint32 > ((quint32)((QHostAddress *)cls)->toIPv4Address (arg1));
}


// QString QHostAddress::toString()


static void _init_f_toString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QHostAddress *)cls)->toString ());
}


// static QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString &subnet)


static void _init_f_parseSubnet_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subnet");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QPair<QHostAddress, int> > ();
}

static void _call_f_parseSubnet_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QPair<QHostAddress, int> > ((QPair<QHostAddress, int>)QHostAddress::parseSubnet (arg1));
}



namespace gsi
{

static gsi::Methods methods_QHostAddress () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostAddress::QHostAddress()\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_0, &_call_ctor_QHostAddress_0);
  methods += new qt_gsi::GenericStaticMethod ("new_ip4", "@brief Constructor QHostAddress::QHostAddress(quint32 ip4Addr)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_1098, &_call_ctor_QHostAddress_1098);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostAddress::QHostAddress(const QString &address)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_2025, &_call_ctor_QHostAddress_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHostAddress::QHostAddress(const QHostAddress &copy)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_2518, &_call_ctor_QHostAddress_2518);
  methods += new qt_gsi::GenericStaticMethod ("new_special", "@brief Constructor QHostAddress::QHostAddress(QHostAddress::SpecialAddress address)\nThis method creates an object of class QHostAddress.", &_init_ctor_QHostAddress_3172, &_call_ctor_QHostAddress_3172);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QHostAddress::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("isBroadcast?", "@brief Method bool QHostAddress::isBroadcast()\n", true, &_init_f_isBroadcast_c0, &_call_f_isBroadcast_c0);
  methods += new qt_gsi::GenericMethod ("isEqual?", "@brief Method bool QHostAddress::isEqual(const QHostAddress &address, QFlags<QHostAddress::ConversionModeFlag> mode)\n", true, &_init_f_isEqual_c6692, &_call_f_isEqual_c6692);
  methods += new qt_gsi::GenericMethod ("isGlobal?", "@brief Method bool QHostAddress::isGlobal()\n", true, &_init_f_isGlobal_c0, &_call_f_isGlobal_c0);
  methods += new qt_gsi::GenericMethod ("isInSubnet?", "@brief Method bool QHostAddress::isInSubnet(const QHostAddress &subnet, int netmask)\n", true, &_init_f_isInSubnet_c3177, &_call_f_isInSubnet_c3177);
  methods += new qt_gsi::GenericMethod ("isInSubnet?", "@brief Method bool QHostAddress::isInSubnet(const QPair<QHostAddress, int> &subnet)\n", true, &_init_f_isInSubnet_c3636, &_call_f_isInSubnet_c3636);
  methods += new qt_gsi::GenericMethod ("isLinkLocal?", "@brief Method bool QHostAddress::isLinkLocal()\n", true, &_init_f_isLinkLocal_c0, &_call_f_isLinkLocal_c0);
  methods += new qt_gsi::GenericMethod ("isLoopback?", "@brief Method bool QHostAddress::isLoopback()\n", true, &_init_f_isLoopback_c0, &_call_f_isLoopback_c0);
  methods += new qt_gsi::GenericMethod ("isMulticast?", "@brief Method bool QHostAddress::isMulticast()\n", true, &_init_f_isMulticast_c0, &_call_f_isMulticast_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QHostAddress::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isSiteLocal?", "@brief Method bool QHostAddress::isSiteLocal()\n", true, &_init_f_isSiteLocal_c0, &_call_f_isSiteLocal_c0);
  methods += new qt_gsi::GenericMethod ("isUniqueLocalUnicast?", "@brief Method bool QHostAddress::isUniqueLocalUnicast()\n", true, &_init_f_isUniqueLocalUnicast_c0, &_call_f_isUniqueLocalUnicast_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QHostAddress::operator !=(const QHostAddress &address)\n", true, &_init_f_operator_excl__eq__c2518, &_call_f_operator_excl__eq__c2518);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QHostAddress::operator !=(QHostAddress::SpecialAddress address)\n", true, &_init_f_operator_excl__eq__c3172, &_call_f_operator_excl__eq__c3172);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QHostAddress::operator ==(const QHostAddress &address)\n", true, &_init_f_operator_eq__eq__c2518, &_call_f_operator_eq__eq__c2518);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QHostAddress::operator ==(QHostAddress::SpecialAddress address)\n", true, &_init_f_operator_eq__eq__c3172, &_call_f_operator_eq__eq__c3172);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHostAddress &QHostAddress::operator=(const QHostAddress &other)\n", false, &_init_f_operator_eq__2518, &_call_f_operator_eq__2518);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHostAddress &QHostAddress::operator=(QHostAddress::SpecialAddress address)\n", false, &_init_f_operator_eq__3172, &_call_f_operator_eq__3172);
  methods += new qt_gsi::GenericMethod ("protocol", "@brief Method QHostAddress::NetworkLayerProtocol QHostAddress::protocol()\n", true, &_init_f_protocol_c0, &_call_f_protocol_c0);
  methods += new qt_gsi::GenericMethod (":scopeId", "@brief Method QString QHostAddress::scopeId()\n", true, &_init_f_scopeId_c0, &_call_f_scopeId_c0);
  methods += new qt_gsi::GenericMethod ("setAddress", "@brief Method void QHostAddress::setAddress(quint32 ip4Addr)\n", false, &_init_f_setAddress_1098, &_call_f_setAddress_1098);
  methods += new qt_gsi::GenericMethod ("setAddress", "@brief Method bool QHostAddress::setAddress(const QString &address)\n", false, &_init_f_setAddress_2025, &_call_f_setAddress_2025);
  methods += new qt_gsi::GenericMethod ("setAddress", "@brief Method void QHostAddress::setAddress(QHostAddress::SpecialAddress address)\n", false, &_init_f_setAddress_3172, &_call_f_setAddress_3172);
  methods += new qt_gsi::GenericMethod ("setScopeId|scopeId=", "@brief Method void QHostAddress::setScopeId(const QString &id)\n", false, &_init_f_setScopeId_2025, &_call_f_setScopeId_2025);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QHostAddress::swap(QHostAddress &other)\n", false, &_init_f_swap_1823, &_call_f_swap_1823);
  methods += new qt_gsi::GenericMethod ("toIPv4Address", "@brief Method quint32 QHostAddress::toIPv4Address(bool *ok)\n", true, &_init_f_toIPv4Address_c1050, &_call_f_toIPv4Address_c1050);
  methods += new qt_gsi::GenericMethod ("toString|to_s", "@brief Method QString QHostAddress::toString()\n", true, &_init_f_toString_c0, &_call_f_toString_c0);
  methods += new qt_gsi::GenericStaticMethod ("parseSubnet", "@brief Static method QPair<QHostAddress, int> QHostAddress::parseSubnet(const QString &subnet)\nThis method is static and can be called without an instance.", &_init_f_parseSubnet_2025, &_call_f_parseSubnet_2025);
  return methods;
}

gsi::Class<QHostAddress> decl_QHostAddress ("QtNetwork", "QHostAddress",
  methods_QHostAddress (),
  "@qt\n@brief Binding of QHostAddress");


GSI_QTNETWORK_PUBLIC gsi::Class<QHostAddress> &qtdecl_QHostAddress () { return decl_QHostAddress; }

}


//  Implementation of the enum wrapper class for QHostAddress::ConversionModeFlag
namespace qt_gsi
{

static gsi::Enum<QHostAddress::ConversionModeFlag> decl_QHostAddress_ConversionModeFlag_Enum ("QtNetwork", "QHostAddress_ConversionModeFlag",
    gsi::enum_const ("ConvertV4MappedToIPv4", QHostAddress::ConvertV4MappedToIPv4, "@brief Enum constant QHostAddress::ConvertV4MappedToIPv4") +
    gsi::enum_const ("ConvertV4CompatToIPv4", QHostAddress::ConvertV4CompatToIPv4, "@brief Enum constant QHostAddress::ConvertV4CompatToIPv4") +
    gsi::enum_const ("ConvertUnspecifiedAddress", QHostAddress::ConvertUnspecifiedAddress, "@brief Enum constant QHostAddress::ConvertUnspecifiedAddress") +
    gsi::enum_const ("ConvertLocalHost", QHostAddress::ConvertLocalHost, "@brief Enum constant QHostAddress::ConvertLocalHost") +
    gsi::enum_const ("TolerantConversion", QHostAddress::TolerantConversion, "@brief Enum constant QHostAddress::TolerantConversion") +
    gsi::enum_const ("StrictConversion", QHostAddress::StrictConversion, "@brief Enum constant QHostAddress::StrictConversion"),
  "@qt\n@brief This class represents the QHostAddress::ConversionModeFlag enum");

static gsi::QFlagsClass<QHostAddress::ConversionModeFlag > decl_QHostAddress_ConversionModeFlag_Enums ("QtNetwork", "QHostAddress_QFlags_ConversionModeFlag",
  "@qt\n@brief This class represents the QFlags<QHostAddress::ConversionModeFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHostAddress> inject_QHostAddress_ConversionModeFlag_Enum_in_parent (decl_QHostAddress_ConversionModeFlag_Enum.defs ());
static gsi::ClassExt<QHostAddress> decl_QHostAddress_ConversionModeFlag_Enum_as_child (decl_QHostAddress_ConversionModeFlag_Enum, "ConversionModeFlag");
static gsi::ClassExt<QHostAddress> decl_QHostAddress_ConversionModeFlag_Enums_as_child (decl_QHostAddress_ConversionModeFlag_Enums, "QFlags_ConversionModeFlag");

}


//  Implementation of the enum wrapper class for QHostAddress::SpecialAddress
namespace qt_gsi
{

static gsi::Enum<QHostAddress::SpecialAddress> decl_QHostAddress_SpecialAddress_Enum ("QtNetwork", "QHostAddress_SpecialAddress",
    gsi::enum_const ("Null", QHostAddress::Null, "@brief Enum constant QHostAddress::Null") +
    gsi::enum_const ("Broadcast", QHostAddress::Broadcast, "@brief Enum constant QHostAddress::Broadcast") +
    gsi::enum_const ("LocalHost", QHostAddress::LocalHost, "@brief Enum constant QHostAddress::LocalHost") +
    gsi::enum_const ("LocalHostIPv6", QHostAddress::LocalHostIPv6, "@brief Enum constant QHostAddress::LocalHostIPv6") +
    gsi::enum_const ("Any", QHostAddress::Any, "@brief Enum constant QHostAddress::Any") +
    gsi::enum_const ("AnyIPv6", QHostAddress::AnyIPv6, "@brief Enum constant QHostAddress::AnyIPv6") +
    gsi::enum_const ("AnyIPv4", QHostAddress::AnyIPv4, "@brief Enum constant QHostAddress::AnyIPv4"),
  "@qt\n@brief This class represents the QHostAddress::SpecialAddress enum");

static gsi::QFlagsClass<QHostAddress::SpecialAddress > decl_QHostAddress_SpecialAddress_Enums ("QtNetwork", "QHostAddress_QFlags_SpecialAddress",
  "@qt\n@brief This class represents the QFlags<QHostAddress::SpecialAddress> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHostAddress> inject_QHostAddress_SpecialAddress_Enum_in_parent (decl_QHostAddress_SpecialAddress_Enum.defs ());
static gsi::ClassExt<QHostAddress> decl_QHostAddress_SpecialAddress_Enum_as_child (decl_QHostAddress_SpecialAddress_Enum, "SpecialAddress");
static gsi::ClassExt<QHostAddress> decl_QHostAddress_SpecialAddress_Enums_as_child (decl_QHostAddress_SpecialAddress_Enums, "QFlags_SpecialAddress");

}

