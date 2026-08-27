/* FUN_1405cce4 @ 0x1405cce4 */

void FUN_1405cce4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_18;
  uint local_14;
  
  local_14 = *DAT_1405cd38;
  if ((param_1 < 2) && (iVar1 = *(int *)(DAT_1405cd3c + param_1 * 4), iVar1 != 0)) {
    uVar3 = FUN_1405b134(iVar1,0x1c,DAT_1405cd40,&local_18);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    iVar1 = (int)uVar3;
    if (iVar1 == 0) {
      *(undefined4 *)(local_18 + 8) = param_3;
      *(undefined4 *)(local_18 + 0xc) = param_2;
      *(char *)(local_18 + 0x10) = (char)param_1;
      *(undefined2 *)(local_18 + 0x12) = 0;
      *(undefined4 *)(local_18 + 0x14) = 0;
      *(undefined2 *)(local_18 + 0x18) = 0;
    }
  }
  else {
    iVar1 = 0x43;
    uVar2 = param_2;
  }
  if ((*DAT_1405cd38 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar1,uVar2,*DAT_1405cd38 ^ local_14,0);
}

