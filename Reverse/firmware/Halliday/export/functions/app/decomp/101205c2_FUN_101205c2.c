/* FUN_101205c2 @ 0x101205c2 */

undefined4
FUN_101205c2(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
            uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  
  local_1c = CONCAT31((int3)((uint)param_2 >> 8),0xbb);
  uVar2 = param_1;
  if (param_5 == 0x10) {
    FUN_10120398();
    local_1c = local_1c & 0xffffff;
  }
  else {
    FUN_10120388((int)&local_1c + 1);
  }
  uVar1 = FUN_1007e054(param_1);
  FUN_101200fc(param_1,1);
  FUN_10120148(param_1,&local_1c,1,0,uVar2);
  FUN_10120148(param_1,(int)&local_1c + 1,3,1);
  if ((param_4 < 5) || ((param_4 & 3) != 0 || (param_6 & 1) != 0)) {
    if ((int)(param_6 << 0x1b) < 0) {
      FUN_10120314(param_1,param_3,param_4,1);
    }
  }
  else if ((param_6 & 0x14) == 0x14) {
    FUN_1012026a(param_1,param_3,param_4,1);
  }
  FUN_101200fc(param_1,0);
  return uVar1;
}

