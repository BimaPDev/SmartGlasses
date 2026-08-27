/* FUN_1408b85c @ 0x1408b85c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b85c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_90 [100];
  undefined4 local_2c;
  
  local_2c = *_LAB_1408b9ac;
  if (*(char *)(_LAB_1408b9b0 + 0x25) != '\0') {
    iVar3 = *(int *)(param_2 + 8);
    if (((*(char *)(iVar3 + 0x12) == '\0') && (*(char *)(iVar3 + 0x11) != '\x0f')) &&
       ((code *)*_LAB_1408b9c0 != (code *)0x0)) {
      (*(code *)*_LAB_1408b9c0)(*(char *)(iVar3 + 0x11),iVar3,auStack_90);
    }
    *(undefined1 *)(iVar3 + 0x12) = 1;
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x96);
  uVar1 = _LAB_1408b9b8;
  if (uVar2 < 10) {
    uVar1 = *(undefined4 *)(_LAB_1408b9b4 + uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x45,_LAB_1408b9bc,param_1,*(undefined2 *)(param_2 + 0x12),
               *(undefined2 *)(param_2 + 0x14),uVar2,uVar1);
}

