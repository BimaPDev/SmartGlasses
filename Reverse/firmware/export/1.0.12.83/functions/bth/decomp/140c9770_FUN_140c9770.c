/* FUN_140c9770 @ 0x140c9770 */

undefined4 *
FUN_140c9770(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  int iVar1;
  undefined4 local_1c;
  
  local_1c._0_1_ = (char)param_3;
  if (((char)local_1c == '\0') && (iVar1 = FUN_140d1882(param_2,param_4,param_5), param_5 != iVar1))
  {
    local_1c._0_1_ = '\x01';
  }
  local_1c._1_3_ = (undefined3)((uint)param_3 >> 8);
  *param_1 = param_2;
  param_1[1] = local_1c;
  return param_1;
}

