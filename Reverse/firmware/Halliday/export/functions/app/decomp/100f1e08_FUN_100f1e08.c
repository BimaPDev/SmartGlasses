/* FUN_100f1e08 @ 0x100f1e08 */

undefined4 FUN_100f1e08(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_100f1e98;
  piVar2 = (int *)*DAT_100f1e98;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar2[1] + 0xc) == param_1) break;
    piVar2 = (int *)*piVar2;
  }
  *param_2 = piVar2[2];
  param_2[1] = piVar2[2];
  switch(param_3) {
  case 1:
  case 2:
    *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)((int)piVar1 + 10);
    return 0;
  case 3:
  case 4:
    *(short *)(param_2 + 1) = (short)piVar1[2];
    return 0;
  case 5:
    *(short *)((int)param_2 + 6) =
         (*(short *)((int)piVar1 + 10) * 2 + -1) - *(short *)((int)piVar1 + 0xe);
    return 0;
  case 6:
    *(short *)((int)param_2 + 6) = *(short *)((int)piVar1 + 0xe) + 1;
    return 0;
  case 7:
    *(short *)(param_2 + 1) = ((short)piVar1[2] * 2 + -1) - (short)piVar1[3];
    return 0;
  case 8:
    *(short *)(param_2 + 1) = (short)piVar1[3] + 1;
    return 0;
  default:
    return 0xffffffea;
  }
}

