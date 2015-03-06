/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_DNDSObject_H_
#define	_DNDSObject_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Client.h"
#include "Context.h"
#include "Node.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DNDSObject_PR {
	DNDSObject_PR_NOTHING,	/* No components present */
	DNDSObject_PR_client,
	DNDSObject_PR_context,
	DNDSObject_PR_node,
	/* Extensions may appear below */
	
} DNDSObject_PR;

/* DNDSObject */
typedef struct DNDSObject {
	DNDSObject_PR present;
	union DNDSObject_u {
		Client_t	 client;
		Context_t	 context;
		Node_t	 node;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DNDSObject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DNDSObject;

#ifdef __cplusplus
}
#endif

#endif	/* _DNDSObject_H_ */
#include <asn_internal.h>
