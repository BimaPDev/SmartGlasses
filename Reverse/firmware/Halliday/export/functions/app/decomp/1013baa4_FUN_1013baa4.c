/* FUN_1013baa4 @ 0x1013baa4 */

int FUN_1013baa4(float param_1,float param_2,float param_3,float param_4,short *param_5,int param_6,
                int *param_7)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int local_2c;
  
  iVar1 = FUN_1013ba14(param_5,&local_2c);
  if (iVar1 == 0) {
    pfVar2 = (float *)FUN_100f0524(0x20);
    if (pfVar2 != (float *)0x0) {
      FUN_1011ea48(pfVar2 + 2,0,0x18);
      *pfVar2 = param_1 + param_3;
      pfVar2[1] = param_2 + param_4;
      pfVar2[7] = 0.0;
      *(undefined1 *)((int)pfVar2 + 9) = 0;
      *(float **)(param_5 + 0x1e) = pfVar2;
      *(float **)(param_5 + 0x20) = pfVar2;
      *(float **)(local_2c + 8) = pfVar2;
      pfVar2 = (float *)FUN_100f0524(0x20);
      if (pfVar2 != (float *)0x0) {
        FUN_1011ea48(pfVar2 + 2,0,0x18);
        *pfVar2 = param_1 - param_3;
        pfVar2[1] = param_2 - param_4;
        *(undefined1 *)((int)pfVar2 + 9) = 0;
        pfVar2[6] = 0.0;
        *(float **)(param_5 + 0x1c) = pfVar2;
        *(float **)(param_5 + 0x22) = pfVar2;
        param_5[0x24] = 2;
        param_5[0x25] = 0;
        *(float **)(local_2c + 0xc) = pfVar2;
        *(undefined4 *)(local_2c + 4) = 2;
        if (param_6 != 0) {
          if (*param_5 == 0x1701) {
            iVar1 = FUN_1013ba4c(**(undefined4 **)(local_2c + 8),(*(undefined4 **)(local_2c + 8))[1]
                                 ,param_5);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = *(int *)(param_5 + 0x1e);
            *(float *)(iVar1 + 0xc) = param_1;
            *(undefined1 *)(iVar1 + 9) = 4;
            *(float *)(iVar1 + 0x10) = param_2;
            puVar4 = *(undefined4 **)(local_2c + 8);
            uVar3 = (*(undefined4 **)(local_2c + 0xc))[1];
            *puVar4 = **(undefined4 **)(local_2c + 0xc);
            puVar4[1] = uVar3;
          }
          else if (*param_5 == 0x1702) {
            pfVar5 = *(float **)(param_5 + 0x1e);
            *pfVar5 = *pfVar5 + param_4;
            pfVar5[1] = pfVar5[1] - param_3;
            *pfVar2 = *pfVar2 + param_4;
            pfVar2[1] = pfVar2[1] - param_3;
          }
        }
        *param_7 = local_2c;
        return 0;
      }
    }
    iVar1 = 5;
  }
  return iVar1;
}

