/* FUN_14059434 @ 0x14059434 */

undefined1 FUN_14059434(uint param_1,byte *param_2)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  short local_22;
  byte *local_20;
  int local_1c;
  
  iVar4 = DAT_14059534;
  local_1c = *DAT_1405952c;
  if (param_1 < 2) {
    iVar5 = *(int *)(DAT_14059530 + param_1 * 4);
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x43) & 0x10) == 0)) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 0;
  }
  if (*param_2 < 0xf) {
    local_22 = *(short *)(DAT_14059534 + (uint)*param_2 * 0xc + 8);
    if (local_22 != 0) {
      local_20 = (byte *)0x0;
      iVar2 = FUN_14073468(&local_20,1);
      if (iVar2 == 0) {
        pbVar3 = local_20;
        if (local_20 != (byte *)0x0) {
          pbVar3 = local_20 + *(ushort *)(local_20 + 6) + 0x30;
        }
        iVar4 = FUN_14072b7c(pbVar3,param_2 + 1,&local_22,0x42,
                             *(undefined4 *)(iVar4 + (uint)*param_2 * 0xc + 4));
        if (iVar4 == 0) {
          FUN_140736a8(local_20,1);
          pbVar3 = local_20;
          if (local_20 != (byte *)0x0) {
            pbVar3 = local_20 + *(ushort *)(local_20 + 6) + 0x30;
          }
          *pbVar3 = *param_2;
          uVar1 = FUN_140711d0(param_1,0,*(undefined1 *)(iVar5 + 0x58),0,local_20);
        }
        else {
          uVar1 = 0x41;
        }
        FUN_140735a8(local_20);
      }
      else {
        uVar1 = 0x4b;
      }
      if (*DAT_1405952c == local_1c) {
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1405953c,0x133,DAT_14059538);
}

