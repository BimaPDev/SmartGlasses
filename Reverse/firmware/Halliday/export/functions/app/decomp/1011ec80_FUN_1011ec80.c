/* FUN_1011ec80 @ 0x1011ec80 */

undefined4 FUN_1011ec80(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint local_1c;
  uint uStack_18;
  
  local_1c = 0;
  if ((((int)param_2 >> 5 == 1) || (iVar2 = (param_2 & 0x1f) + param_3, 0x20 < iVar2)) ||
     (uStack_18 = param_3, iVar2 = FUN_10068ef0((int)param_2 >> 5,&local_1c,param_3,iVar2,param_1),
     iVar2 != 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_3 == 0x20) {
      *param_1 = local_1c;
    }
    else {
      *param_1 = (1 << (param_3 & 0xff)) - 1U & local_1c >> (param_2 & 0x1f);
    }
    uVar1 = 0;
  }
  return uVar1;
}

