/* FUN_2c013884 @ 0x2c013884 */

void FUN_2c013884(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_2c0138b0;
  iVar3 = *(int *)(DAT_2c0138b0 + 4);
  uVar2 = FUN_2c013694();
  do {
  } while ((uint)(iVar3 - *(int *)(iVar1 + 4)) <
           (uint)((ulonglong)DAT_2c0138b8 *
                  (ulonglong)
                  (param_1 * (uint)((ulonglong)DAT_2c0138b4 * (ulonglong)(uVar2 >> 5) >> 0x27)) >>
                 0x23));
  return;
}

