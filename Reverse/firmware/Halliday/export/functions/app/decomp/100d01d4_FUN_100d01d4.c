/* FUN_100d01d4 @ 0x100d01d4 */

uint FUN_100d01d4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar3 = param_1[0x36];
  uVar4 = (uVar3 & 0xf) >> 3;
  if ((int)(uVar3 << 0x1c) < 0) {
    uVar4 = 6;
  }
  else {
    uVar5 = **(ushort **)(param_2 + 8);
    if (uVar5 < 0x17) {
      uVar4 = 4;
    }
    else {
      iVar1 = FUN_100cfd10(*(undefined4 *)*param_1,3,2,*(ushort **)(param_2 + 8),param_4);
      if (iVar1 == 0) {
        uVar4 = 0xe;
      }
      else {
        puVar2 = (undefined1 *)FUN_100c1fe4(iVar1 + 8,2);
        puVar2[1] = (byte)((uVar3 << 0x1c) >> 0x1f);
        *puVar2 = 0xf7;
        FUN_1013509c(param_1,iVar1,DAT_100d0238);
        if (0xf6 < uVar5) {
          uVar5 = 0xf7;
        }
        *(ushort *)((int)param_1 + 0x5a) = uVar5;
        *(ushort *)((int)param_1 + 0x66) = uVar5;
      }
    }
  }
  return uVar4;
}

