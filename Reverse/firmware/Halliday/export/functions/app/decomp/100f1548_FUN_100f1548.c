/* FUN_100f1548 @ 0x100f1548 */

undefined4 FUN_100f1548(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_100f156c;
  do {
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) {
      return 0xfffffffd;
    }
  } while (*(ushort *)(piVar1[1] + 0xc) != param_1);
  uVar2 = piVar1[3];
  *param_2 = piVar1[2];
  param_2[1] = uVar2;
  return 0;
}

