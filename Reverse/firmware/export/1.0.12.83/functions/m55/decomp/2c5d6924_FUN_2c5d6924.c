/* FUN_2c5d6924 @ 0x2c5d6924 */

void FUN_2c5d6924(char *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char *local_10;
  uint local_c;
  
  local_c = *DAT_2c5d6970;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    bVar1 = false;
    puVar2 = param_2;
  }
  else {
    uVar3 = FUN_2c66d418(param_1,&local_10,10);
    puVar2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
    *param_2 = (int)uVar3;
    bVar1 = *local_10 == '\0';
  }
  if ((*DAT_2c5d6970 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(bVar1,puVar2,*DAT_2c5d6970 ^ local_c,0);
}

