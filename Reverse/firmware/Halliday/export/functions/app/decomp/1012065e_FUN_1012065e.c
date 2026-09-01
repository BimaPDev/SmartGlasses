/* FUN_1012065e @ 0x1012065e */

undefined4
FUN_1012065e(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
            uint param_6)

{
  undefined4 uVar1;
  undefined4 local_20;
  uint local_1c;
  
  local_20 = CONCAT31((int3)((uint)param_1 >> 8),0xeb);
  local_1c = param_2;
  if (param_5 == 0x10) {
    FUN_10120398();
    local_20 = local_20 & 0xffffff;
  }
  else {
    FUN_10120388((int)&local_20 + 1);
  }
  local_1c = local_1c & 0xffffff00;
  uVar1 = FUN_1007e054(param_1);
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&local_20,1,0);
  FUN_10120148(param_1,(int)&local_20 + 1,4,2);
  if ((param_4 < 5) || ((param_4 & 3) != 0 || (param_6 & 1) != 0)) {
    if ((int)(param_6 << 0x1b) < 0) {
      FUN_10120314(param_1,param_3,param_4,2);
    }
  }
  else if ((param_6 & 0x14) == 0x14) {
    FUN_1012026a(param_1,param_3,param_4,2);
  }
  FUN_101200fc(param_1,0);
  return uVar1;
}

