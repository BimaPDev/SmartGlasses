/* FUN_14002db4 @ 0x14002db4 */

void FUN_14002db4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_14002de0;
  iVar3 = *(int *)(DAT_14002de0 + 4);
  uVar2 = FUN_14002ee4();
  do {
  } while ((uint)(iVar3 - *(int *)(iVar1 + 4)) <
           (uint)((ulonglong)DAT_14002de8 *
                  (ulonglong)
                  (param_1 * (uint)((ulonglong)DAT_14002de4 * (ulonglong)(uVar2 >> 5) >> 0x27)) >>
                 0x23));
  return;
}

