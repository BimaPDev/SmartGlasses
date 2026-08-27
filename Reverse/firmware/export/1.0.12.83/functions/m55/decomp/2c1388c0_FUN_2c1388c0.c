/* FUN_2c1388c0 @ 0x2c1388c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c1388c0(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_r3;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  iVar2 = iRam2c1389e4;
  uVar8 = 0;
  puVar4 = param_1;
  piVar7 = (int *)(param_4 + 0x14);
LAB_2c1388ea:
  do {
    uVar5 = (uint)*(char *)(param_1[0x10] + uVar8);
    if ((-1 < (int)uVar5) &&
       ((int)((*(uint *)(iVar2 + (uVar5 >> 5) * 4) >> (uVar5 & 0x1f)) << 0x1f) < 0)) {
      iVar3 = (*(code *)param_1[9])(uVar8,0);
      puVar4 = (undefined4 *)0x0;
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)(*(code *)param_1[6])(uVar8);
        piVar6 = piVar7;
        if (piVar7[2] == 0) {
          piVar6 = (int *)piVar7[-1];
          if (piVar6 == (int *)0x0) {
            FUN_2c135988(4,0x61,uRam2c1389d4,uRam2c1389d8,uRam2c1389d0,*param_1,uVar8,
                         (undefined4 *)param_1[1],*(undefined4 *)param_1[1]);
            uVar1 = uRam2c1389d4;
            iVar3 = (int)piVar7 + *(int *)(*(int *)param_1[1] + 0x38) + (-0x14 - param_4);
            piVar7[-1] = iVar3;
            puVar4 = (undefined4 *)
                     FUN_2c135988(4,0x65,uVar1,uRam2c1389d8,uRam2c1389dc,*param_1,uVar8,iVar3);
            piVar6 = (int *)piVar7[-1];
          }
          piVar6 = (int *)*piVar6;
          goto joined_r0x2c138968;
        }
        do {
          if ((code *)piVar7[3] == (code *)0x0) {
            FUN_2c13635c(uRam2c1389e0,*param_1,uVar8);
            puVar4 = (undefined4 *)(extraout_r3 + (int)piVar7);
            coprocessor_function2(0xb,0xc,5,in_cr6,in_cr15,in_cr3);
            FUN_2c135988(4,0x161,_DAT_2c138d10,_DAT_2c138d14,_DAT_2c138d18,*puVar4,piVar7,
                         extraout_r3 + uVar8,*(undefined1 *)(extraout_r3 + uVar8 + 0x28));
            *(int *)(puVar4[0xe] + uVar8 + 0x20) = iVar2;
            *(undefined4 **)(puVar4[0xe] + uVar8 + 0x24) = param_1;
            *(undefined1 *)(puVar4[0xe] + uVar8 + 0x2a) = 1;
            iVar2 = _LAB_2c138d04;
            uVar8 = (uint)*(char *)(puVar4[0x11] + (int)piVar7);
            if (-1 < (int)uVar8) {
              *(int *)(_LAB_2c138d04 + ((uVar8 >> 5) + 0x60) * 4) = 1 << (uVar8 & 0x1f);
              uVar8 = (uint)*(char *)(puVar4[0x11] + (int)piVar7);
              if (-1 < (int)uVar8) {
                *(int *)(iVar2 + (uVar8 >> 5) * 4) = 1 << (uVar8 & 0x1f);
              }
            }
            *(undefined4 **)puVar4[2] = puVar4;
            DataSynchronizationBarrier(0xf);
            return (undefined4 *)0x0;
          }
          puVar4 = (undefined4 *)(*(code *)piVar7[3])(piVar6[2],piVar6[1]);
          if (puVar4 < (undefined4 *)piVar6[1]) {
            uVar8 = uVar8 + 1;
            *piVar7 = *piVar6;
            piVar7[1] = piVar6[1] - (int)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + piVar6[2]);
            piVar7[2] = (int)puVar4;
            param_2 = (uint)*(byte *)((int)param_1 + 0x35);
            piVar7 = piVar7 + 0xb;
            if (param_2 <= uVar8) {
              return puVar4;
            }
            goto LAB_2c1388ea;
          }
          piVar6 = (int *)*piVar6;
joined_r0x2c138968:
        } while (piVar6 != (int *)0x0);
        if ((char)piVar7[5] == '\0') {
          puVar4 = (undefined4 *)(*(code *)param_1[8])(uVar8);
        }
        piVar7[2] = 0;
      }
      param_2 = (uint)*(byte *)((int)param_1 + 0x35);
    }
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0xb;
    if (param_2 <= uVar8) {
      return puVar4;
    }
  } while( true );
}

