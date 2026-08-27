/* FUN_2c5a6acc @ 0x2c5a6acc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a6acc(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 auStack_50 [14];
  undefined4 uStack_18;
  
  pcVar2 = _LAB_2c5a6b38;
  *_LAB_2c5a6b38 = (char)param_1;
  if (param_1 == 1) {
    FUN_2c5a2398();
    pcVar5 = (char *)FUN_2c5a2408();
    puVar3 = _LAB_2c5a6b3c;
    if (*pcVar5 != '\0') {
      FUN_2c644044(*_LAB_2c5a6b3c,0xffffffff);
      FUN_2c5a2398();
      puVar6 = (undefined1 *)FUN_2c5a2408();
      *puVar6 = 0;
      FUN_2c644080(*puVar3);
      FUN_2c5a2398();
      FUN_2c5a2408();
      uStack_18 = _LAB_2c5a6b40;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5a6b48,0x77,_LAB_2c5a6b44);
    }
  }
  FUN_2c5a2398();
  iVar4 = func_0x2c5a2410();
  cVar1 = *pcVar2;
  iVar7 = *_LAB_2c5a39e4;
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 != 0) {
    if (cVar1 != '\x01') {
      *_LAB_2c5a39e8 = 0;
    }
    *(char *)(iVar4 + 0xd) = cVar1;
    FUN_2c5a2398();
    iVar4 = func_0x2c5a2418();
    if (iVar4 != 0) {
      FUN_2c62c3b0(auStack_50,0x44);
      auStack_50[0] = 10;
      FUN_2c6419a8(auStack_50);
    }
    if (*_LAB_2c5a39e4 == iVar7) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5a39f4,400,_LAB_2c5a39f0,_LAB_2c5a39ec);
}

