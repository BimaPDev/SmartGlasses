/* FUN_1408d858 @ 0x1408d858 */

void FUN_1408d858(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  
  puVar2 = (undefined2 *)FUN_14075258(param_5);
  iVar3 = FUN_1408b254(param_2,*puVar2,3);
  if (iVar3 != 0) {
    if (1 < *(byte *)(iVar3 + 0x96) - 6) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1408daf4,param_1);
    }
    if (*(byte *)(iVar3 + 0x1c) != param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_1408daf0,param_1,(uint)*(byte *)(iVar3 + 0x1c),param_3);
    }
    if ((ushort)puVar2[2] - 2 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1408dafc,param_1);
    }
    if ((ushort)puVar2[2] != 1) {
      if (*(char *)(iVar3 + 0x26) == '\0') {
        *(undefined1 *)(iVar3 + 0x71) = 0;
      }
      FUN_1408c3a0(param_1,iVar3 + 0x71,puVar2 + 3,param_4 - 6U & 0xffff,0);
      if ((puVar2[1] & 1) == 0) {
        *(byte *)(iVar3 + 0x26) = (byte)puVar2[1] & 1;
        if (*(char *)(iVar3 + 0x96) == '\x06') {
          *(undefined1 *)(iVar3 + 0x96) = 8;
        }
        else if (*(char *)(iVar3 + 0x96) == '\a') {
          *(undefined1 *)(iVar3 + 0x96) = 9;
          FUN_1408a9c8(param_1,iVar3);
        }
      }
      else {
        *(undefined1 *)(iVar3 + 0x26) = 1;
      }
      FUN_14075520(param_5,param_4);
      return;
    }
    uVar10 = param_4 - 6U & 0xffff;
    FUN_14075520(param_5,6);
joined_r0x1408d97c:
    if (uVar10 == 0) {
      if (-1 < (int)((uint)(ushort)puVar2[1] << 0x1f)) {
        FUN_1408bac4(param_1,iVar3);
        return;
      }
      return;
    }
    pbVar4 = (byte *)FUN_14075258(param_5);
    puVar5 = (ushort *)FUN_14075520(param_5,2);
    FUN_14075520(param_5,pbVar4[1]);
    uVar10 = uVar10 + (0xfffe - (uint)pbVar4[1]) & 0xffff;
    switch(*pbVar4 & 0x7f) {
    case 1:
      uVar1 = *puVar5;
      if (0x2f < uVar1) {
        if (*(ushort *)(iVar3 + 0x10) < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x43,DAT_1408db04,DAT_1408db00,uVar1,*(ushort *)(iVar3 + 0x10));
        }
        *(ushort *)(iVar3 + 0x4d) = uVar1;
        goto joined_r0x1408d97c;
      }
      break;
    case 2:
      if (*puVar5 == 0xffff) {
        *(undefined1 *)(iVar3 + 0x4f) = 0xff;
        *(undefined1 *)(iVar3 + 0x50) = 0xff;
        goto joined_r0x1408d97c;
      }
      break;
    case 3:
      if (*(char *)((int)puVar5 + 1) != '\x02') {
        uVar7 = *(undefined4 *)(puVar5 + 2);
        uVar6 = *(undefined4 *)(puVar5 + 4);
        uVar8 = *(undefined4 *)(puVar5 + 6);
        *(undefined4 *)(iVar3 + 0x51) = *(undefined4 *)puVar5;
        *(undefined4 *)(iVar3 + 0x55) = uVar7;
        *(undefined4 *)(iVar3 + 0x59) = uVar6;
        *(undefined4 *)(iVar3 + 0x5d) = uVar8;
        *(undefined4 *)(iVar3 + 0x61) = *(undefined4 *)(puVar5 + 8);
        *(ushort *)(iVar3 + 0x65) = puVar5[10];
        goto joined_r0x1408d97c;
      }
      break;
    case 4:
      if (*(char *)(iVar3 + 0xaa) == '\0') {
        if ((char)*puVar5 != '\0') break;
      }
      else if ((*(char *)(iVar3 + 0xaa) == '\x03') && ((char)*puVar5 != '\x03')) break;
      uVar7 = *(undefined4 *)puVar5;
      *(undefined4 *)(iVar3 + 0x6b) = *(undefined4 *)(puVar5 + 2);
      *(undefined4 *)(iVar3 + 0x67) = uVar7;
      *(char *)(iVar3 + 0x6f) = (char)puVar5[4];
      goto joined_r0x1408d97c;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_1408db08);
    }
    FUN_14075520(param_5,uVar10);
    FUN_1408c5a4(param_1,iVar3,0);
    return;
  }
  piVar9 = (int *)(param_2 + 0x14);
  while( true ) {
    piVar9 = piVar9 + 1;
    iVar3 = *piVar9;
    if ((iVar3 != 0) && (*(byte *)(iVar3 + 0x1c) == param_3)) break;
    if ((int *)(param_2 + 0x44) == piVar9) {
LAB_1408d932:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_1408daf8,param_1,*puVar2,param_3);
    }
  }
  if (*(byte *)(iVar3 + 0x1e) < 3) {
    *(byte *)(iVar3 + 0x1e) = *(byte *)(iVar3 + 0x1e) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1408daf8,param_1,*puVar2,param_3);
  }
  goto LAB_1408d932;
}

