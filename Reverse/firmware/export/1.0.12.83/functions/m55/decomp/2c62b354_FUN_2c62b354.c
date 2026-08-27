/* FUN_2c62b354 @ 0x2c62b354 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62b354(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iStack_20;
  uint uStack_1c;
  
  puVar1 = _LAB_2c62b3b4;
  cVar2 = '\x04';
  uStack_1c = *_LAB_2c62b3b0;
  iVar3 = *param_2 + -1;
  *param_2 = iVar3;
  do {
    uVar4 = (*(code *)*puVar1)(param_1 + iVar3);
    if ((int)uVar4 != 0) {
      iStack_20 = *param_2;
      uVar4 = (*(code *)*_LAB_2c62b3b8)(param_1,&iStack_20);
      goto LAB_2c62b386;
    }
    if (*param_2 == 0) break;
    cVar2 = cVar2 + -1;
    iVar3 = *param_2 + -1;
    *param_2 = iVar3;
  } while (cVar2 != '\0');
  uVar4 = uVar4 & 0xffffffff00000000;
LAB_2c62b386:
  if ((*_LAB_2c62b3b0 ^ uStack_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar4,(int)(uVar4 >> 0x20),*_LAB_2c62b3b0 ^ uStack_1c,0);
}

