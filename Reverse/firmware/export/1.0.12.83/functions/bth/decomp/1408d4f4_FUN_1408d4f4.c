/* FUN_1408d4f4 @ 0x1408d4f4 */

void FUN_1408d4f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,short param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = (undefined2 *)FUN_14075258(param_5);
  iVar3 = FUN_1408b254(param_2,*puVar2,4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1408d6a4,param_1,*puVar2);
  }
  if (*(byte *)(iVar3 + 0x96) != 4) {
    if (4 < *(byte *)(iVar3 + 0x96) - 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1408d694,param_1);
    }
    *(char *)(iVar3 + 0x1d) = (char)param_3;
    FUN_14075520(param_5,4);
    if (*(char *)(iVar3 + 0x25) == '\0') {
      *(undefined1 *)(iVar3 + 0x27) = 0;
    }
    uVar4 = FUN_14075258(param_5);
    cVar1 = FUN_1408c3a0(param_1,iVar3 + 0x27,uVar4,param_4 + -4,iVar3);
    FUN_14075520(param_5,param_4 + -4);
    if (cVar1 != '\x01') {
      if ((puVar2[1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1408d698,DAT_1408d69c);
      }
      *(byte *)(iVar3 + 0x25) = (byte)puVar2[1] & 1;
      iVar5 = FUN_1408bd9c(param_1,iVar3);
      if (iVar5 != 1) {
        cVar1 = *(char *)(iVar3 + 0x96);
        if ((cVar1 == '\x05') || (cVar1 == '\t')) {
          if (*(char *)(iVar3 + 0x22) != '\0') {
            FUN_14074f94(iVar3 + 0x22);
            *(undefined1 *)(iVar3 + 0x22) = 0;
          }
          *(undefined1 *)(iVar3 + 0x96) = 7;
          FUN_1408bac4(param_1,iVar3);
          return;
        }
        if (cVar1 == '\x06') {
          *(undefined1 *)(iVar3 + 0x96) = 7;
        }
        else if (cVar1 == '\b') {
          *(undefined1 *)(iVar3 + 0x96) = 9;
          FUN_1408a9c8(param_1,iVar3);
          return;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_1408d6a0,param_1,DAT_1408d69c,param_3);
}

