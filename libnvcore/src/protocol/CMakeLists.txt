include_directories("./")

ADD_LIBRARY(dnds_protocol STATIC
	DNDSMessage.c
	DNDSResult.c
	DNMessage.c
	DSMessage.c
	DNDSObject.c
	DNDSObjects.c
	ObjectName.c
	AuthRequest.c
	AuthResponse.c
	NetinfoRequest.c
	NetinfoResponse.c
	ProvRequest.c
	ProvResponse.c
	P2pSide.c
	P2pRequest.c
	P2pResponse.c
	AddRequest.c
	AddResponse.c
	DelRequest.c
	DelResponse.c
	ModifyRequest.c
	ModifyResponse.c
	ConnectState.c
	NodeConnectInfo.c
	SearchType.c
	SearchRequest.c
	SearchResponse.c
	TerminateRequest.c
	Topology.c
	Client.c
	Context.c
	Node.c

	BOOLEAN.c
	IA5String.c
	INTEGER.c
	NULL.c
	NativeEnumerated.c
	NativeInteger.c
	PrintableString.c
	asn_SEQUENCE_OF.c
	asn_SET_OF.c
	constr_CHOICE.c
	constr_SEQUENCE.c
	constr_SEQUENCE_OF.c
	constr_SET_OF.c
	OCTET_STRING.c
	BIT_STRING.c
	asn_codecs_prim.c
	ber_tlv_length.c
	ber_tlv_tag.c
	ber_decoder.c
	der_encoder.c
	constr_TYPE.c
	constraints.c
	xer_support.c
	xer_decoder.c
	xer_encoder.c
	per_support.c
	per_decoder.c
	per_encoder.c
	per_opentype.c
)

if (UNIX)
	set_target_properties(dnds_protocol PROPERTIES COMPILE_FLAGS "-fPIC")
endif()
