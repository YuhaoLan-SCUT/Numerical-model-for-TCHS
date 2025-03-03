function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:35,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:71,type:"fcn"};
this.def["rtDW"] = {file: "Sim1017_CODE_c.html",line:22,type:"var"};
this.def["rtU"] = {file: "Sim1017_CODE_c.html",line:25,type:"var"};
this.def["BigEndianIEEEDouble"] = {file: "Sim1017_CODE_c.html",line:49,type:"type"};
this.def["LittleEndianIEEEDouble"] = {file: "Sim1017_CODE_c.html",line:56,type:"type"};
this.def["IEEESingle"] = {file: "Sim1017_CODE_c.html",line:63,type:"type"};
this.def["rtInf"] = {file: "Sim1017_CODE_c.html",line:65,type:"var"};
this.def["rtMinusInf"] = {file: "Sim1017_CODE_c.html",line:66,type:"var"};
this.def["rtNaN"] = {file: "Sim1017_CODE_c.html",line:67,type:"var"};
this.def["rtInfF"] = {file: "Sim1017_CODE_c.html",line:68,type:"var"};
this.def["rtMinusInfF"] = {file: "Sim1017_CODE_c.html",line:69,type:"var"};
this.def["rtNaNF"] = {file: "Sim1017_CODE_c.html",line:70,type:"var"};
this.def["rtGetInf"] = {file: "Sim1017_CODE_c.html",line:76,type:"fcn"};
this.def["rtGetInfF"] = {file: "Sim1017_CODE_c.html",line:100,type:"fcn"};
this.def["rtGetMinusInf"] = {file: "Sim1017_CODE_c.html",line:111,type:"fcn"};
this.def["rtGetMinusInfF"] = {file: "Sim1017_CODE_c.html",line:135,type:"fcn"};
this.def["rtGetNaN"] = {file: "Sim1017_CODE_c.html",line:146,type:"fcn"};
this.def["rtGetNaNF"] = {file: "Sim1017_CODE_c.html",line:170,type:"fcn"};
this.def["rt_InitInfAndNaN"] = {file: "Sim1017_CODE_c.html",line:182,type:"fcn"};
this.def["rtIsInf"] = {file: "Sim1017_CODE_c.html",line:194,type:"fcn"};
this.def["rtIsInfF"] = {file: "Sim1017_CODE_c.html",line:200,type:"fcn"};
this.def["rtIsNaN"] = {file: "Sim1017_CODE_c.html",line:206,type:"fcn"};
this.def["rtIsNaNF"] = {file: "Sim1017_CODE_c.html",line:212,type:"fcn"};
this.def["rt_powd_snf"] = {file: "Sim1017_CODE_c.html",line:217,type:"fcn"};
this.def["Sim1017_CODE_step"] = {file: "Sim1017_CODE_c.html",line:264,type:"fcn"};
this.def["Sim1017_CODE_initialize"] = {file: "Sim1017_CODE_c.html",line:4683,type:"fcn"};
this.def["DW"] = {file: "Sim1017_CODE_h.html",line:126,type:"type"};
this.def["ExtU"] = {file: "Sim1017_CODE_h.html",line:131,type:"type"};
this.def["Alpha02"] = {file: "global_c.html",line:23,type:"var"};
this.def["Alpha05"] = {file: "global_c.html",line:24,type:"var"};
this.def["Alpha08"] = {file: "global_c.html",line:25,type:"var"};
this.def["Beta02"] = {file: "global_c.html",line:26,type:"var"};
this.def["Beta05"] = {file: "global_c.html",line:27,type:"var"};
this.def["Beta08"] = {file: "global_c.html",line:28,type:"var"};
this.def["Temp02"] = {file: "global_c.html",line:29,type:"var"};
this.def["Temp05"] = {file: "global_c.html",line:30,type:"var"};
this.def["Temp08"] = {file: "global_c.html",line:31,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Sim1017_CODE_c.html"] = "../Sim1017_CODE.c";
	this.html2Root["Sim1017_CODE_c.html"] = "Sim1017_CODE_c.html";
	this.html2SrcPath["Sim1017_CODE_h.html"] = "../Sim1017_CODE.h";
	this.html2Root["Sim1017_CODE_h.html"] = "Sim1017_CODE_h.html";
	this.html2SrcPath["Sim1017_CODE_types_h.html"] = "../Sim1017_CODE_types.h";
	this.html2Root["Sim1017_CODE_types_h.html"] = "Sim1017_CODE_types_h.html";
	this.html2SrcPath["global_c.html"] = "../global.c";
	this.html2Root["global_c.html"] = "global_c.html";
	this.html2SrcPath["global_h.html"] = "../global.h";
	this.html2Root["global_h.html"] = "global_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Sim1017_CODE_c.html","Sim1017_CODE_h.html","Sim1017_CODE_types_h.html","global_c.html","global_h.html","rtwtypes_h.html"];
