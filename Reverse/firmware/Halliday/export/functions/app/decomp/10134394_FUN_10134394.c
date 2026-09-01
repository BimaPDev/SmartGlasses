/* FUN_10134394 @ 0x10134394 */

uint FUN_10134394(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar2 = *param_1;
    if (((iVar2 != 0) && (*(char *)(iVar2 + 0xd) == '\a')) && (*(char *)(iVar2 + 2) == '\x02')) {
      uVar3 = (uint)*(ushort *)(param_2 + 0xc);
      if (*(short *)((int)param_1 + 0x46) == 0x19) {
        uVar1 = 0x37f;
      }
      else {
        uVar1 = (uint)*(ushort *)((int)param_1 + 0x56);
      }
      if (uVar1 < uVar3) {
        FUN_100a5b78(DAT_100e2538 | (DAT_100e2534 - DAT_100e2530) * 0x20 & 0xff00U,DAT_100e253c,
                     uVar3,uVar1,param_1);
        uVar3 = 0xffffff86;
      }
      else {
        FUN_10134022(*param_1,(short)param_1[0x15],param_2,param_3,0,param_2,param_3);
      }
      return uVar3;
    }
    uVar3 = 0xffffff80;
  }
  return uVar3;
}

