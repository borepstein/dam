package main

import "fmt"
import "dam_core"

func main(){
    content := make(dam_core.UnivDataContent)
    content["de_type"] = (byte)(2)
    content["de_content"] = (byte)(135)
    fmt.Printf("content=%s\n", content)
    var de dam_core.UnivDataContent
    (&de).InitDataEntry(&content)
    fmt.Printf("de=%s\n", de)
    me_ptr := dam_core.GetMasterEntry()
    fmt.Printf("me=%s\n", *me_ptr)
}