/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7717522131d47f9d133ac2a9649f1974f70b6a05 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_use_soap_error_handler, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enable, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_is_soap_fault, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, object, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SoapParam___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, data, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SoapHeader___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, namespace, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mustUnderstand, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_MASK(0, actor, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_NULL, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SoapFault___construct, 0, 0, 2)
	ZEND_ARG_TYPE_MASK(0, code, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, NULL)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, actor, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, details, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, headerFault, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_SoapFault___toString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SoapVar___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, data, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, typeName, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, typeNamespace, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, nodeName, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, nodeNamespace, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_SoapServer___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, wsdl, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_fault, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, actor, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, details, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_addSoapHeader, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, header, SoapHeader, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_setPersistence, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_setClass, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, class, IS_STRING, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO(0, args, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_setObject, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, object, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_getFunctions, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_addFunction, 0, 1, IS_VOID, 0)
	ZEND_ARG_INFO(0, functions)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapServer_handle, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, request, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_SoapClient___construct arginfo_class_SoapServer___construct

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___call, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___soapCall, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 1, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, inputHeaders, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, outputHeaders, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___getFunctions, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_SoapClient___getTypes arginfo_class_SoapClient___getFunctions

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___getLastRequest, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_SoapClient___getLastResponse arginfo_class_SoapClient___getLastRequest

#define arginfo_class_SoapClient___getLastRequestHeaders arginfo_class_SoapClient___getLastRequest

#define arginfo_class_SoapClient___getLastResponseHeaders arginfo_class_SoapClient___getLastRequest

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___doRequest, 0, 4, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, request, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, oneWay, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___setCookie, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, value, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_SoapClient___getCookies arginfo_class_SoapServer_getFunctions

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___setSoapHeaders, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, headers, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SoapClient___setLocation, 0, 0, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, location, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()


ZEND_FUNCTION(use_soap_error_handler);
ZEND_FUNCTION(is_soap_fault);
ZEND_METHOD(SoapParam, __construct);
ZEND_METHOD(SoapHeader, __construct);
ZEND_METHOD(SoapFault, __construct);
ZEND_METHOD(SoapFault, __toString);
ZEND_METHOD(SoapVar, __construct);
ZEND_METHOD(SoapServer, __construct);
ZEND_METHOD(SoapServer, fault);
ZEND_METHOD(SoapServer, addSoapHeader);
ZEND_METHOD(SoapServer, setPersistence);
ZEND_METHOD(SoapServer, setClass);
ZEND_METHOD(SoapServer, setObject);
ZEND_METHOD(SoapServer, getFunctions);
ZEND_METHOD(SoapServer, addFunction);
ZEND_METHOD(SoapServer, handle);
ZEND_METHOD(SoapClient, __construct);
ZEND_METHOD(SoapClient, __call);
ZEND_METHOD(SoapClient, __soapCall);
ZEND_METHOD(SoapClient, __getFunctions);
ZEND_METHOD(SoapClient, __getTypes);
ZEND_METHOD(SoapClient, __getLastRequest);
ZEND_METHOD(SoapClient, __getLastResponse);
ZEND_METHOD(SoapClient, __getLastRequestHeaders);
ZEND_METHOD(SoapClient, __getLastResponseHeaders);
ZEND_METHOD(SoapClient, __doRequest);
ZEND_METHOD(SoapClient, __setCookie);
ZEND_METHOD(SoapClient, __getCookies);
ZEND_METHOD(SoapClient, __setSoapHeaders);
ZEND_METHOD(SoapClient, __setLocation);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(use_soap_error_handler, arginfo_use_soap_error_handler)
	ZEND_FE(is_soap_fault, arginfo_is_soap_fault)
	ZEND_FE_END
};


static const zend_function_entry class_SoapParam_methods[] = {
	ZEND_ME(SoapParam, __construct, arginfo_class_SoapParam___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_SoapHeader_methods[] = {
	ZEND_ME(SoapHeader, __construct, arginfo_class_SoapHeader___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_SoapFault_methods[] = {
	ZEND_ME(SoapFault, __construct, arginfo_class_SoapFault___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapFault, __toString, arginfo_class_SoapFault___toString, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_SoapVar_methods[] = {
	ZEND_ME(SoapVar, __construct, arginfo_class_SoapVar___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_SoapServer_methods[] = {
	ZEND_ME(SoapServer, __construct, arginfo_class_SoapServer___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, fault, arginfo_class_SoapServer_fault, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, addSoapHeader, arginfo_class_SoapServer_addSoapHeader, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, setPersistence, arginfo_class_SoapServer_setPersistence, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, setClass, arginfo_class_SoapServer_setClass, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, setObject, arginfo_class_SoapServer_setObject, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, getFunctions, arginfo_class_SoapServer_getFunctions, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, addFunction, arginfo_class_SoapServer_addFunction, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapServer, handle, arginfo_class_SoapServer_handle, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_SoapClient_methods[] = {
	ZEND_ME(SoapClient, __construct, arginfo_class_SoapClient___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __call, arginfo_class_SoapClient___call, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __soapCall, arginfo_class_SoapClient___soapCall, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getFunctions, arginfo_class_SoapClient___getFunctions, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getTypes, arginfo_class_SoapClient___getTypes, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getLastRequest, arginfo_class_SoapClient___getLastRequest, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getLastResponse, arginfo_class_SoapClient___getLastResponse, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getLastRequestHeaders, arginfo_class_SoapClient___getLastRequestHeaders, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getLastResponseHeaders, arginfo_class_SoapClient___getLastResponseHeaders, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __doRequest, arginfo_class_SoapClient___doRequest, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __setCookie, arginfo_class_SoapClient___setCookie, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __getCookies, arginfo_class_SoapClient___getCookies, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __setSoapHeaders, arginfo_class_SoapClient___setSoapHeaders, ZEND_ACC_PUBLIC)
	ZEND_ME(SoapClient, __setLocation, arginfo_class_SoapClient___setLocation, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_SoapParam(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SoapParam", class_SoapParam_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval property_param_name_default_value;
	ZVAL_UNDEF(&property_param_name_default_value);
	zend_string *property_param_name_name = zend_string_init("param_name", sizeof("param_name") - 1, 1);
	zend_declare_typed_property(class_entry, property_param_name_name, &property_param_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_param_name_name);

	zval property_param_data_default_value;
	ZVAL_UNDEF(&property_param_data_default_value);
	zend_string *property_param_data_name = zend_string_init("param_data", sizeof("param_data") - 1, 1);
	zend_declare_typed_property(class_entry, property_param_data_name, &property_param_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_param_data_name);

	return class_entry;
}

static zend_class_entry *register_class_SoapHeader(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SoapHeader", class_SoapHeader_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval property_namespace_default_value;
	ZVAL_UNDEF(&property_namespace_default_value);
	zend_string *property_namespace_name = zend_string_init("namespace", sizeof("namespace") - 1, 1);
	zend_declare_typed_property(class_entry, property_namespace_name, &property_namespace_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_namespace_name);

	zval property_name_default_value;
	ZVAL_UNDEF(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_name_name);

	zval property_data_default_value;
	ZVAL_NULL(&property_data_default_value);
	zend_string *property_data_name = zend_string_init("data", sizeof("data") - 1, 1);
	zend_declare_typed_property(class_entry, property_data_name, &property_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_data_name);

	zval property_mustUnderstand_default_value;
	ZVAL_UNDEF(&property_mustUnderstand_default_value);
	zend_string *property_mustUnderstand_name = zend_string_init("mustUnderstand", sizeof("mustUnderstand") - 1, 1);
	zend_declare_typed_property(class_entry, property_mustUnderstand_name, &property_mustUnderstand_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_mustUnderstand_name);

	zval property_actor_default_value;
	ZVAL_UNDEF(&property_actor_default_value);
	zend_string *property_actor_name = zend_string_init("actor", sizeof("actor") - 1, 1);
	zend_declare_typed_property(class_entry, property_actor_name, &property_actor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_LONG|MAY_BE_NULL));
	zend_string_release(property_actor_name);

	return class_entry;
}

static zend_class_entry *register_class_SoapFault(zend_class_entry *class_entry_Exception)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SoapFault", class_SoapFault_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Exception);

	return class_entry;
}

static zend_class_entry *register_class_SoapVar(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SoapVar", class_SoapVar_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval property_enc_type_default_value;
	ZVAL_UNDEF(&property_enc_type_default_value);
	zend_string *property_enc_type_name = zend_string_init("enc_type", sizeof("enc_type") - 1, 1);
	zend_declare_typed_property(class_entry, property_enc_type_name, &property_enc_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_enc_type_name);

	zval property_enc_value_default_value;
	ZVAL_NULL(&property_enc_value_default_value);
	zend_string *property_enc_value_name = zend_string_init("enc_value", sizeof("enc_value") - 1, 1);
	zend_declare_typed_property(class_entry, property_enc_value_name, &property_enc_value_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_enc_value_name);

	zval property_enc_stype_default_value;
	ZVAL_NULL(&property_enc_stype_default_value);
	zend_string *property_enc_stype_name = zend_string_init("enc_stype", sizeof("enc_stype") - 1, 1);
	zend_declare_typed_property(class_entry, property_enc_stype_name, &property_enc_stype_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_enc_stype_name);

	zval property_enc_ns_default_value;
	ZVAL_NULL(&property_enc_ns_default_value);
	zend_string *property_enc_ns_name = zend_string_init("enc_ns", sizeof("enc_ns") - 1, 1);
	zend_declare_typed_property(class_entry, property_enc_ns_name, &property_enc_ns_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_enc_ns_name);

	zval property_enc_name_default_value;
	ZVAL_NULL(&property_enc_name_default_value);
	zend_string *property_enc_name_name = zend_string_init("enc_name", sizeof("enc_name") - 1, 1);
	zend_declare_typed_property(class_entry, property_enc_name_name, &property_enc_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_enc_name_name);

	zval property_enc_namens_default_value;
	ZVAL_NULL(&property_enc_namens_default_value);
	zend_string *property_enc_namens_name = zend_string_init("enc_namens", sizeof("enc_namens") - 1, 1);
	zend_declare_typed_property(class_entry, property_enc_namens_name, &property_enc_namens_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_enc_namens_name);

	return class_entry;
}

static zend_class_entry *register_class_SoapServer(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SoapServer", class_SoapServer_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval property_service_default_value;
	ZVAL_NULL(&property_service_default_value);
	zend_string *property_service_name = zend_string_init("service", sizeof("service") - 1, 1);
	zend_declare_property_ex(class_entry, property_service_name, &property_service_default_value, ZEND_ACC_PUBLIC, NULL);
	zend_string_release(property_service_name);

	return class_entry;
}

static zend_class_entry *register_class_SoapClient(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SoapClient", class_SoapClient_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}
