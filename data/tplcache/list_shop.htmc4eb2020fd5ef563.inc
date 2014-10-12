<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",509,541);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",656,691);
$z[6][4]['filename']="head.htm";
$z[7]=Array("global","",875,907);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("list","\r\n            <li>\r\n                <div>\r\n                [field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>\"); [/field:array]\r\n                <div class=\"brif\">\r\n                    <p><a href=\"[field:arcurl/]\" class=\"title\">[field:title/]</a></p>\r\n\r\n                        <!--small>日期：</small>[field:pubdate function=\"GetDateTimeMK(@me)\"/]-->\r\n                    <p>    <small>价格：</small>[field:trueprice/]</p>\r\n                    <p>    <small>价格：</small>[field:trueprice/]</p>\r\n                        <!--small>品牌：</small>[field:brand/]>\r\n                        <small>人气：</small>[field:click/]-->\r\n                </div>\r\n                 <!--class=\"intro\">\r\n                    [field:description/]...-->\r\n                </div>\r\n            </li>\r\n            ",1132,2072);
$z[8][4]['pagesize']="12";
$z[8][4]['typeid']="17";
$z[9]=Array("pagelist","",2212,2283);
$z[9][4]['listitem']="info,index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2348,2385);
$z[10][4]['filename']="footer.htm";

?>