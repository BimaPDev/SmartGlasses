/* FUN_1408b72c @ 0x1408b72c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b72c(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [100];
  undefined4 local_24;
  
  local_24 = *_LAB_1408b840;
  if (*(char *)(_LAB_1408b83c + 0x25) != '\0') {
    iVar5 = *(int *)(param_2 + 8);
    if (((*(char *)(iVar5 + 0x12) == '\0') && (*(char *)(iVar5 + 0x11) != '\x0f')) &&
       ((code *)*_LAB_1408b84c != (code *)0x0)) {
      (*(code *)*_LAB_1408b84c)(*(char *)(iVar5 + 0x11),iVar5,auStack_88);
    }
    *(undefined1 *)(iVar5 + 0x12) = 1;
  }
  uVar4 = (uint)*(byte *)(param_2 + 0x96);
  uVar1 = *(undefined2 *)(param_2 + 0x16);
  uVar2 = *(undefined2 *)(param_2 + 0x12);
  uVar6 = _LAB_1408b858;
  if (uVar4 < 10) {
    uVar6 = *(undefined4 *)(_LAB_1408b844 + uVar4 * 4);
  }
  uVar3 = FUN_1408a8dc(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x46,_LAB_1408b848,param_1,uVar2,uVar4,uVar6,uVar1,uVar3);
}

