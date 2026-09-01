/* FUN_100f1e9c @ 0x100f1e9c */

undefined4 FUN_100f1e9c(uint param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_24;
  
  piVar1 = DAT_100f2028;
  piVar5 = (int *)*DAT_100f2028;
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar5[1] + 0xc) == param_1) break;
    piVar5 = (int *)*piVar5;
  }
  switch(param_3) {
  case 1:
    local_24 = (uint)(ushort)((*(short *)((int)DAT_100f2028 + 0xe) + 1) -
                             *(short *)((int)DAT_100f2028 + 10)) << 0x10;
    break;
  case 2:
    local_24 = (uint)(ushort)(*(short *)((int)DAT_100f2028 + 10) -
                             (*(short *)((int)DAT_100f2028 + 0xe) + 1)) << 0x10;
    break;
  case 3:
    local_24 = (uint)(ushort)(((short)DAT_100f2028[3] + 1) - (short)DAT_100f2028[2]);
    break;
  case 4:
    local_24 = (uint)(ushort)((short)DAT_100f2028[2] - ((short)DAT_100f2028[3] + 1));
    break;
  case 5:
    local_24 = (uint)(ushort)((*(short *)((int)DAT_100f2028 + 0xe) + 1) -
                             *(short *)((int)DAT_100f2028 + 10)) << 0x10;
    goto LAB_100f1ef2;
  case 6:
    local_24 = (uint)(ushort)(*(short *)((int)DAT_100f2028 + 10) -
                             (*(short *)((int)DAT_100f2028 + 0xe) + 1)) << 0x10;
    goto LAB_100f1ef2;
  case 7:
    local_24 = (uint)(ushort)(((short)DAT_100f2028[3] + 1) - (short)DAT_100f2028[2]);
    goto LAB_100f1ef2;
  case 8:
    local_24 = (uint)(ushort)((short)DAT_100f2028[2] - ((short)DAT_100f2028[3] + 1));
LAB_100f1ef2:
    if (param_2 != 0) {
      FUN_100f1bbc(param_2);
    }
    goto LAB_100f1f12;
  default:
    return 0xffffffea;
  }
  FUN_100f1bbc(param_1);
LAB_100f1f12:
  iVar2 = FUN_100f4a34(DAT_100f2024,param_1,param_2,&local_24,param_4,1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4[1] != *param_4) {
    piVar5 = (int *)*piVar1;
    piVar4 = piVar5;
    if (piVar5 != (int *)0x0) {
      do {
        if (*(ushort *)(piVar4[1] + 0xc) == param_1) {
          FUN_100f1034(piVar4,(int)(short)param_4[1],(int)*(short *)((int)param_4 + 6));
          if (param_2 != 0) {
            piVar5 = (int *)*piVar1;
            iVar2 = (int)(short)((short)param_4[1] + (short)local_24);
            iVar3 = (int)(short)(*(short *)((int)param_4 + 6) + local_24._2_2_);
            goto joined_r0x100f201a;
          }
          goto LAB_100f1f5a;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
      if (param_2 != 0) {
        iVar2 = (int)(short)((short)param_4[1] + (short)local_24);
        iVar3 = (int)(short)(*(short *)((int)param_4 + 6) + local_24._2_2_);
        do {
          if (*(ushort *)(piVar5[1] + 0xc) == param_2) {
            FUN_100f1034(piVar5,iVar2,iVar3);
            break;
          }
          piVar5 = (int *)*piVar5;
joined_r0x100f201a:
        } while (piVar5 != (int *)0x0);
      }
    }
  }
LAB_100f1f5a:
  FUN_100f08bc(3);
  return 0xffffffea;
}

