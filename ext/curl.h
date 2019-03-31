#ifndef RUBY_CURL_H
#define RUBY_CURL_H

#include <ruby.h>
#include <curl/curl.h>

#include "easy.h"

#define RB_DEFINE_M_OPT_CONST(name, curl_opt_name) \
	rb_define_const(rb_mOption, name, LONG2NUM(curl_opt_name))

#define RB_DEFINE_M_INFO_CONST(name, curl_info_name) \
	rb_define_const(rb_mInfo, name, LONG2NUM(curl_info_name))

#define RB_DEFINE_M_AUTH_CONST(name, curl_auth_name) \
	rb_define_const(rb_mAuth, name, LONG2NUM(curl_auth_name))

#define RB_DEFINE_M_IPResolve_CONST(name, curl_ipresolve_name) \
	rb_define_const(rb_mIPResolve, name, LONG2NUM(curl_ipresolve_name))

#define RB_DEFINE_M_RedirPost_CONST(name, curl_redirpost_name) \
	rb_define_const(rb_mRedirPost, name, LONG2NUM(curl_redirpost_name))

#define RB_DEFINE_M_Proto_CONST(name, curl_proto_name) \
	rb_define_const(rb_mProto, name, LONG2NUM(curl_proto_name))

extern VALUE rb_mCurl;

void Init_curl();

#endif
