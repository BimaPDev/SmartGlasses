/* FUN_10081fc4 @ 0x10081fc4 */

int FUN_10081fc4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = param_2;
  iVar1 = FUN_10081f04(param_1,&local_18);
  if (iVar1 == 0) {
    iVar1 = FUN_10081ea8(param_1,&local_18,&local_14);
    if (iVar1 == 0) {
      iVar1 = (uint)*(ushort *)(local_14 + 0x12) * (uint)*(byte *)(local_14 + 0xb) *
              (uint)*(ushort *)(local_14 + 0xe) *
              ((uint)*(ushort *)(local_14 + 0x10) / (uint)*(ushort *)(local_14 + 0x12));
    }
    else {
      FUN_10119dc2(DAT_10082014);
      iVar1 = 0;
    }
  }
  else {
    FUN_10119dc2(DAT_10082010);
    iVar1 = 0;
  }
  return iVar1;
}

