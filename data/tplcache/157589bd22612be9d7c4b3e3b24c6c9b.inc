<li>
                <div>
                [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>"); [/field:array]
                <div>
                    <p><a href="[field:arcurl/]" class="title">[field:title/]</a></p>

                        <!--small>日期：</small>[field:pubdate function="GetDateTimeMK(@me)"/]-->
                    <p>    <small>价格：</small>[field:trueprice/]</p>
                        <!--small>品牌：</small>[field:brand/]>
                        <small>人气：</small>[field:click/]-->
                </div>
                 <!--class="intro">
                    [field:description/]...-->
                </div>
            </li>