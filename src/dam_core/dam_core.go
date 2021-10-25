package dam_core

const DEC_LENGTH byte = 64

//Master Entry parameters
const ME_DEFAULT_DE_ID uint64 = 0
const ME_ENTRY_CATALOG_TAG = "entry_catalog"
const ME_ENTRY_CATALOG_MIN_TAG = "entry_catalog_min"
const ME_ENTRY_CATALOG_MAX_TAG = "entry_catalog_max"

// Data Entry types
const DE_TYPE_MASTER_COLL byte = 0
const DE_TYPE_GROUP byte = 1
const DE_TYPE_BYTE byte = 2
const DE_TYPE_UINT16 byte = 3
const DE_TYPE_UINT32 byte = 4
const DE_TYPE_UINT64 byte = 5
const DE_TYPE_FLOAT16 byte =6
const DE_TYPE_FLOAT32 byte = 7
const DE_TYPE_FLOAT64 byte = 8
const DE_TYPE_INT16 byte = 9
const DE_TYPE_INT32 byte = 10
const DE_TYPE_INT64 byte = 11
const DE_TYPE_STRING byte = 12
const DE_TYPE_UNIV_COLLECTION byte = 32

// Data Entry Tags
const DE_TAG_DE_ID = "de_id"
const DE_TAG_CONTENT = "de_content"
const DE_TAG_TYPE = "de_type"

type UnivDataContent map[interface{}]interface{}

var master_entry UnivDataContent

func GetMasterEntry () (*UnivDataContent){
    return &master_entry
}

func initMasterDataEntry(){
    // Checking if the Master Entry has been initialized.
    if master_entry[DE_TAG_DE_ID] != nil{
        return
    }

    master_entry = make( UnivDataContent )
    master_entry[DE_TAG_DE_ID] = ME_DEFAULT_DE_ID
    master_entry[DE_TAG_TYPE] = DE_TYPE_MASTER_COLL
    master_entry[ME_ENTRY_CATALOG_TAG] = make( UnivDataContent )
    (master_entry[ME_ENTRY_CATALOG_TAG]).(UnivDataContent)[master_entry[DE_TAG_DE_ID]]  = &master_entry
    master_entry[ME_ENTRY_CATALOG_MIN_TAG] = master_entry[DE_TAG_DE_ID]
    master_entry[ME_ENTRY_CATALOG_MAX_TAG] = master_entry[DE_TAG_DE_ID]
}

/*
Init meta data under the following tag:
DE_INIT_META_TAG = "data_entry_init"
*/
func (de *UnivDataContent) InitDataEntry(de_record *UnivDataContent)(){
    initMasterDataEntry()

    if ((*de_record)[DE_TAG_TYPE] == DE_TYPE_MASTER_COLL){
        return
    }

    master_de_ptr := GetMasterEntry()

    *de = make( UnivDataContent )

    for key, value := range(*de_record){
        (*de)[key] = value
    }

    (*master_de_ptr)[ME_ENTRY_CATALOG_MAX_TAG] = ((*master_de_ptr)[ME_ENTRY_CATALOG_MAX_TAG]).(uint64) + 1
    (*de)[DE_TAG_DE_ID] = (*master_de_ptr)[ME_ENTRY_CATALOG_MAX_TAG]
    ((*master_de_ptr)[ME_ENTRY_CATALOG_TAG]).(UnivDataContent)[(*de)[DE_TAG_DE_ID]] = de
}


