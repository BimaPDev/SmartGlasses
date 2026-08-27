/* FUN_2c4c3630 @ 0x2c4c3630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c3630(int param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = *_LAB_2c4c36c0;
  func_0x2c673998(*(undefined1 *)(param_1 + 0x7c),&uStack_14,&uStack_10,0);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uStack_14 = uStack_14 << 1;
  }
  else if (*(char *)(param_1 + 0x80) == '\x02') {
    uStack_14 = uStack_14 << 2;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = extraout_r1;
  if ((uVar4 <= uStack_10) && (uVar2 = *(uint *)(param_1 + 0x14), uStack_10 < uVar4 + uVar2)) {
    uVar5 = uVar2 >> 2;
    if (uStack_14 <= uVar2 >> 2) {
      uVar3 = (uStack_10 - uVar4) / uVar5;
      uVar2 = uVar3 & 0xff;
      if ((uStack_10 - uVar4) - uVar5 * uVar3 < uVar5 - uStack_14) {
        if (uVar2 == 0) {
          uVar2 = 3;
        }
        else {
          uVar2 = uVar2 - 1 & 0xff;
        }
      }
      iVar1 = uVar2 * uVar5 + uVar4 + (uVar5 - uStack_14);
      goto LAB_2c4c3694;
    }
  }
  iVar1 = 0;
LAB_2c4c3694:
  if ((*_LAB_2c4c36c0 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar1,uVar2,*_LAB_2c4c36c0 ^ uStack_c,0);
}

