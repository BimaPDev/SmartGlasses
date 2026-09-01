/* FUN_10089434 @ 0x10089434 */

int * FUN_10089434(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  piVar2 = (int *)param_1;
  do {
    uVar6 = 0;
    if (piVar2 == (int *)0x0) {
LAB_1008944a:
      piVar2 = (int *)FUN_10094254(uVar6,DAT_10089530,uVar6,param_4,param_1,param_2,param_3);
      if (piVar2 != (int *)0x0) {
        FUN_1011ea48(piVar2,0,uVar6);
        *piVar2 = param_1;
        piVar2[1] = param_2;
        if (param_2 == 0) {
          iVar3 = FUN_10092f04();
          uVar1 = DAT_10089530;
          if (iVar3 == 0) {
            FUN_10094174(2,DAT_10089538,0x3a,DAT_10089530,DAT_10089534);
            FUN_10094268(piVar2,DAT_10089530);
            piVar2 = (int *)0x0;
          }
          else {
            if (*(int *)(iVar3 + 0xc) == 0) {
              puVar4 = (undefined4 *)FUN_10094254(4,DAT_10089530);
              *(undefined4 **)(iVar3 + 0xc) = puVar4;
              *puVar4 = piVar2;
              *(undefined4 *)(iVar3 + 0x24) = 1;
            }
            else {
              iVar5 = *(int *)(iVar3 + 0x24) + 1;
              *(int *)(iVar3 + 0x24) = iVar5;
              iVar5 = FUN_10094280(*(int *)(iVar3 + 0xc),iVar5 * 4,uVar1);
              *(int *)(iVar3 + 0xc) = iVar5;
              *(int **)(iVar5 + (*(int *)(iVar3 + 0x24) + 0x3fffffff) * 4) = piVar2;
            }
            piVar2[5] = 0;
            piVar2[6] = 0;
            iVar3 = FUN_10092f10(0);
            piVar2[7] = iVar3 + -1;
            iVar3 = FUN_10092f2c(0);
            piVar2[8] = iVar3 + -1;
          }
        }
        else {
          if (*(int *)(param_2 + 8) == 0) {
            FUN_10089398(param_2);
          }
          uVar1 = DAT_10089530;
          piVar8 = *(int **)(param_2 + 8);
          if (*piVar8 == 0) {
            iVar3 = FUN_10094254(4,DAT_10089530);
            puVar4 = *(undefined4 **)(param_2 + 8);
            *piVar8 = iVar3;
            *(int **)*puVar4 = piVar2;
            puVar4[1] = 1;
          }
          else {
            iVar3 = piVar8[1];
            piVar8[1] = iVar3 + 1;
            iVar3 = FUN_10094280(*piVar8,(iVar3 + 1) * 4,uVar1);
            piVar7 = *(int **)(param_2 + 8);
            *piVar8 = iVar3;
            *(int **)(*piVar7 + (piVar7[1] + 0x3fffffff) * 4) = piVar2;
          }
        }
      }
      return piVar2;
    }
    param_4 = piVar2[7];
    if ((DAT_1008952c & param_4) != 0) {
      uVar6 = (param_4 & 0xfffff) >> 4;
      goto LAB_1008944a;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

