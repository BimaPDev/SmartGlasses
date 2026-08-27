/* FUN_14071ab0 @ 0x14071ab0 */

void FUN_14071ab0(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  do {
    iVar2 = DAT_14071b0c;
    iVar3 = FUN_14073a58(DAT_14071b0c);
    if (iVar3 == 0) {
      return;
    }
    *(int *)(iVar2 + 8) = iVar3;
    sVar1 = *(short *)(iVar3 + 4);
    if (sVar1 != 0x1105) {
      if (sVar1 == 0x1106) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14071b18);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14071b14,0x4d3,DAT_14071b10,sVar1,0);
    }
    FUN_140779e0(*(undefined2 *)(iVar3 + 9),iVar3 + 0xc,*(undefined1 *)(iVar3 + 0xb));
    *(undefined1 *)(iVar2 + 0xc) = 0;
    iVar2 = DAT_14071b6c;
    iVar3 = *(int *)(DAT_14071b6c + 8);
    *(undefined1 *)(DAT_14071b6c + 0xc) = 1;
    *(undefined4 *)(iVar2 + 8) = 0;
    uVar4 = (uint)*(ushort *)(iVar3 + 4);
    if (uVar4 < 0x1103) {
      if (uVar4 < 0x1100) {
LAB_14071b3c:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x44,DAT_14071b74,0x570,DAT_14071b70,uVar4,0);
      }
    }
    else if (1 < uVar4 - 0x1105) goto LAB_14071b3c;
    thunk_FUN_14074168(iVar3);
  } while( true );
}

