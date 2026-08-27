/* FUN_140d44c6 @ 0x140d44c6 */

undefined4
FUN_140d44c6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7,byte param_8,byte param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_230;
  uint local_22c;
  uint uStack_228;
  undefined4 local_224;
  undefined1 auStack_220 [516];
  
  uVar1 = FUN_140d2a04(param_5 + 0x6c);
  uVar2 = FUN_140d2b6c(param_5 + 0x6c);
  local_230 = FUN_140c9d5e(uVar1,0x25);
  if (param_9 == 0) {
    local_22c = (uint)param_8;
    uStack_228 = 0;
  }
  else {
    local_224 = 0;
    local_22c = (uint)param_9;
    uStack_228 = (uint)param_8;
  }
  FUN_140d8db0(uVar2,auStack_220,0x80,&local_230,param_7);
  uVar1 = FUN_140df568(auStack_220);
  FUN_140c9770(param_1,param_3,param_4,auStack_220,uVar1);
  return param_1;
}

