/* FUN_10120838 @ 0x10120838 */

undefined4
FUN_10120838(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
            uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  
  local_24 = CONCAT31((int3)((uint)param_2 >> 8),3);
  uVar2 = param_1;
  uStack_20 = param_3;
  if (param_5 == 0x10) {
    FUN_10120398();
  }
  else {
    FUN_10120388((int)&local_24 + 1);
  }
  local_24 = local_24 & 0xffffff;
  uVar1 = FUN_1007e054(param_1);
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&local_24,1,0,uVar2);
  FUN_10120148(param_1,(int)&local_24 + 1,3,0);
  if ((param_4 < 5) || ((param_6 & 1) != 0 || (param_4 & 3) != 0)) {
    if ((int)(param_6 << 0x1b) < 0) {
      FUN_10120314(param_1,param_3,param_4,0);
    }
  }
  else if ((param_6 & 0x14) == 0x14) {
    FUN_1012026a(param_1,param_3,param_4);
  }
  FUN_101200fc(param_1,0);
  return uVar1;
}

