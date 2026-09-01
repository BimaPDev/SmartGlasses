/* FUN_100e09c0 @ 0x100e09c0 */

void FUN_100e09c0(ushort param_1,code *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *DAT_100e09f0;
  iVar2 = DAT_100e09f4;
  for (iVar3 = 0; iVar3 < (int)((uVar1 & 0x7ff) >> 7); iVar3 = iVar3 + 1) {
    if ((*(ushort *)(iVar2 + 0xe) & param_1) != 0) {
      (*param_2)(iVar2,param_3);
    }
    iVar2 = iVar2 + 0x60;
  }
  return;
}

