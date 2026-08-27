/* FUN_1404ca1c @ 0x1404ca1c */

undefined4 FUN_1404ca1c(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = DAT_14048614;
  if (param_1 != 0) {
    uVar4 = FUN_1402a6e8(4,0x5b1,DAT_1404ca60,DAT_1404ca5c,DAT_1404ca58,DAT_1404ca54,param_1);
    return uVar4;
  }
  if (*(char *)(DAT_1404ca50 + 6) == '\0') {
    return 0;
  }
  uVar1 = *(undefined2 *)(DAT_1404ca50 + 8);
  puVar3 = (undefined4 *)FUN_140e5728(*DAT_14048614,0);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14048618);
  }
  uVar4 = FUN_140e5998();
  *puVar3 = uVar4;
  puVar3[1] = 3;
  *(undefined2 *)(puVar3 + 2) = uVar1;
  iVar5 = FUN_140e56b8(*puVar2,puVar3);
  if (iVar5 == 0) {
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1404861c);
}

