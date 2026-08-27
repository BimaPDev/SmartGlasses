/* FUN_1405cecc @ 0x1405cecc */

void FUN_1405cecc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  iVar3 = *DAT_1405cf0c;
  iVar2 = FUN_1405b26c();
  uVar1 = DAT_1405cf10;
  if (iVar2 == 0) {
    *(undefined4 *)(local_10 + 0x18) = 0;
    *(undefined4 *)(local_10 + 0x1c) = uVar1;
  }
  if (*DAT_1405cf0c == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

