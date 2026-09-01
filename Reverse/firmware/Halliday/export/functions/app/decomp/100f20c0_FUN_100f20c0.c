/* FUN_100f20c0 @ 0x100f20c0 */

undefined4 FUN_100f20c0(uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar2 = DAT_100f2130;
  piVar4 = (int *)*DAT_100f2130;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar4[1] + 0xc) == param_1) break;
    piVar4 = (int *)*piVar4;
  }
  iVar1 = FUN_100f4a34(DAT_100f2134,param_1,0xffff,0,param_2,0);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (param_2[1] != *param_2) {
      for (piVar2 = (int *)*piVar2; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
        if (*(ushort *)(piVar2[1] + 0xc) == param_1) {
          FUN_100f1034(piVar2,(int)(short)param_2[1],(int)*(short *)((int)param_2 + 6));
          break;
        }
      }
    }
    FUN_100f08bc(3);
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

