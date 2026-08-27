/* FUN_140767a8 @ 0x140767a8 */

uint FUN_140767a8(undefined4 param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  pbVar3 = (byte *)FUN_1407667c();
  iVar2 = DAT_1407693c;
  if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14076944,DAT_14076934,param_1,param_2);
  }
  uVar6 = (*pbVar3 & 0xf) >> 1;
  if (uVar6 == 1) {
    FUN_140765f4(param_3);
    FUN_140e5148(*(undefined4 *)(iVar2 + 4),0xffffffff);
    iVar4 = FUN_1407667c(1,param_2);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x4042,DAT_14076958,param_2,param_3);
    }
    bVar1 = *(byte *)(iVar4 + 0xd);
    if (bVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14076950,param_2,bVar1,param_3);
    }
    *(byte *)(iVar4 + 0xd) = bVar1 - param_3;
    if (*(char *)(iVar2 + 9) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_1407694c,param_2,*(undefined1 *)(iVar4 + 0xd),
                   *(undefined2 *)(iVar2 + 0x264),*(undefined2 *)(iVar2 + 0x288));
    }
  }
  else {
    if (uVar6 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14076938,DAT_14076934,uVar6,param_2);
    }
    FUN_140e5148(*(undefined4 *)(DAT_1407693c + 4),0xffffffff);
    uVar7 = (uint)param_3;
    if (*(char *)(iVar2 + 0x28c) == '\0') {
      uVar5 = *(ushort *)(iVar2 + 0x288) + uVar7;
      if (*(ushort *)(iVar2 + 0x28a) < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x44,DAT_14076948,(uint)*(ushort *)(iVar2 + 0x288),uVar7,
                     (uint)*(ushort *)(iVar2 + 0x28a));
      }
      *(short *)(iVar2 + 0x288) = (short)uVar5;
    }
    else {
      FUN_140765f4(uVar7);
    }
    FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
    FUN_140e5148(*(undefined4 *)(iVar2 + 4),0xffffffff);
    iVar4 = FUN_1407667c(3,param_2);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x4042,DAT_1407695c,param_2,uVar7);
    }
    bVar1 = *(byte *)(iVar4 + 0xd);
    if (bVar1 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14076954,param_2,(uint)bVar1,uVar7);
    }
    *(byte *)(iVar4 + 0xd) = bVar1 - param_3;
    if (*(char *)(iVar2 + 9) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14076940,param_2,*(undefined1 *)(iVar4 + 0xd),
                   *(undefined2 *)(iVar2 + 0x264),*(undefined2 *)(iVar2 + 0x288));
    }
  }
  FUN_140e52d8(*(undefined4 *)(iVar2 + 4));
  return uVar6;
}

