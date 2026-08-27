/* FUN_2c6211c4 @ 0x2c6211c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_2c6211c4(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  cVar4 = *(char *)(param_2 + 0x10);
  iStack_1c = *_LAB_2c6212bc;
  iStack_30 = 0;
  if (cVar4 == '\x01') {
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar3 = FUN_2c62e148(uVar5,param_2,0);
    iVar2 = FUN_2c66b624(uVar3,_LAB_2c6212c0);
    if ((iVar2 == 0) && (iVar2 = func_0x2c623da4(&uStack_2c,&uStack_28,uVar5), iVar2 == 0)) {
      iVar2 = func_0x2c6259d8(&iStack_30,&iStack_24,&iStack_20,uStack_2c,uStack_28);
      FUN_2c62bea8(uStack_2c);
      if (iVar2 == 0) {
        if (iStack_20 * iStack_24 != 0) {
          iVar2 = 0;
          do {
            uVar1 = *(undefined1 *)(iStack_30 + 2 + iVar2 * 4);
            *(undefined1 *)(iStack_30 + 2 + iVar2 * 4) = *(undefined1 *)(iStack_30 + iVar2 * 4);
            *(undefined1 *)(iStack_30 + iVar2 * 4) = uVar1;
            iVar2 = iVar2 + 1;
          } while (iStack_20 * iStack_24 - iVar2 != 0);
        }
        goto LAB_2c621234;
      }
      if (iStack_30 != 0) {
        FUN_2c62bea8();
        cVar4 = '\0';
        goto LAB_2c6211e2;
      }
    }
  }
  else if (cVar4 == '\0') {
    iVar2 = func_0x2c6259d8(&iStack_30,&iStack_24,&iStack_20,
                            *(undefined4 *)(*(int *)(param_2 + 4) + 8),
                            *(undefined4 *)(*(int *)(param_2 + 4) + 4));
    if (iVar2 != 0) {
      if (iStack_30 != 0) {
        FUN_2c62bea8();
      }
      goto LAB_2c6211e2;
    }
    if (iStack_20 * iStack_24 != 0) {
      iVar2 = 0;
      do {
        uVar1 = *(undefined1 *)(iStack_30 + 2 + iVar2 * 4);
        *(undefined1 *)(iStack_30 + 2 + iVar2 * 4) = *(undefined1 *)(iStack_30 + iVar2 * 4);
        *(undefined1 *)(iStack_30 + iVar2 * 4) = uVar1;
        iVar2 = iVar2 + 1;
      } while (iStack_20 * iStack_24 - iVar2 != 0);
    }
    cVar4 = '\x01';
LAB_2c621234:
    *(int *)(param_2 + 0x18) = iStack_30;
    goto LAB_2c6211e2;
  }
  cVar4 = '\0';
LAB_2c6211e2:
  if (*_LAB_2c6212bc != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return cVar4;
}

