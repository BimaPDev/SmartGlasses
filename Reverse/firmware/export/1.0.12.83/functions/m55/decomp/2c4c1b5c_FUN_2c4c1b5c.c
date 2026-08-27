/* FUN_2c4c1b5c @ 0x2c4c1b5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c1b5c(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  iVar1 = _LAB_2c4c1c80;
  uVar6 = 0;
  piVar5 = (int *)(param_4 + 0x14);
LAB_2c4c1b84:
  do {
    uVar3 = (uint)*(char *)(param_1[0x10] + uVar6);
    if ((-1 < (int)uVar3) &&
       ((int)((*(uint *)(iVar1 + (uVar3 >> 5) * 4) >> (uVar3 & 0x1f)) << 0x1f) < 0)) {
      iVar2 = (*(code *)param_1[9])(uVar6,0);
      if (iVar2 != 0) {
        (*(code *)param_1[6])(uVar6);
        piVar4 = piVar5;
        if (piVar5[2] == 0) {
          if ((int *)piVar5[-1] != (int *)0x0) {
            piVar4 = *(int **)piVar5[-1];
            goto joined_r0x2c4c1c04;
          }
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x61,_LAB_2c4c1c74,_LAB_2c4c1c70,_LAB_2c4c1c6c,*param_1,uVar6,
                (undefined4 *)param_1[1],*(undefined4 *)param_1[1]);
        }
        do {
          if ((code *)piVar5[3] == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c673ca8(_LAB_2c4c1c7c,*param_1,uVar6);
          }
          uVar3 = (*(code *)piVar5[3])(piVar4[2],piVar4[1]);
          if (uVar3 < (uint)piVar4[1]) {
            uVar6 = uVar6 + 1;
            *piVar5 = *piVar4;
            piVar5[1] = piVar4[1] - uVar3;
            piVar5[2] = uVar3 + piVar4[2];
            param_2 = (uint)*(byte *)((int)param_1 + 0x35);
            piVar5 = piVar5 + 0xb;
            if (param_2 <= uVar6) {
              return;
            }
            goto LAB_2c4c1b84;
          }
          piVar4 = (int *)*piVar4;
joined_r0x2c4c1c04:
        } while (piVar4 != (int *)0x0);
        if ((char)piVar5[5] == '\0') {
          (*(code *)param_1[8])(uVar6);
        }
        piVar5[2] = 0;
      }
      param_2 = (uint)*(byte *)((int)param_1 + 0x35);
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 0xb;
    if (param_2 <= uVar6) {
      return;
    }
  } while( true );
}

