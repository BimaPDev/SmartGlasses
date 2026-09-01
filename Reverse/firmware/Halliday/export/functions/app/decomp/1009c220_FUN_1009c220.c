/* FUN_1009c220 @ 0x1009c220 */

void FUN_1009c220(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_1009c2f4;
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = fVar4 * DAT_1009c2f0;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    *(float *)(param_1 + 0xc) = fVar4;
    *(float *)(param_1 + 0x14) = fVar4;
    *(float *)(param_1 + 0x18) = fVar3;
    *(float *)(param_1 + 0x1c) = fVar3;
    *(float *)(param_1 + 0x20) = fVar4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    break;
  case 1:
    *(float *)(param_1 + 0x10) = fVar4;
    *(float *)(param_1 + 0x18) = fVar4;
    fVar4 = fVar1 - fVar4;
    *(float *)(param_1 + 0xc) = fVar1;
    *(float *)(param_1 + 0x14) = fVar1 - fVar3;
    *(float *)(param_1 + 0x1c) = fVar4;
    goto LAB_1009c280;
  case 2:
    fVar4 = DAT_1009c2f4 - fVar4;
    fVar3 = DAT_1009c2f4 - fVar3;
    *(float *)(param_1 + 0xc) = fVar4;
    *(float *)(param_1 + 0x10) = fVar1;
    *(float *)(param_1 + 0x14) = fVar4;
    *(float *)(param_1 + 0x18) = fVar3;
    *(float *)(param_1 + 0x1c) = fVar3;
    *(float *)(param_1 + 0x20) = fVar4;
    *(float *)(param_1 + 0x24) = fVar1;
    break;
  case 3:
    fVar2 = DAT_1009c2f4 - fVar4;
    *(float *)(param_1 + 0x14) = fVar3;
    *(float *)(param_1 + 0xc) = fVar1;
    *(float *)(param_1 + 0x10) = fVar2;
    *(float *)(param_1 + 0x18) = fVar2;
    *(float *)(param_1 + 0x1c) = fVar4;
    fVar3 = fVar1 - fVar3;
LAB_1009c280:
    *(float *)(param_1 + 0x20) = fVar3;
    *(float *)(param_1 + 0x24) = fVar4;
    *(float *)(param_1 + 0x28) = fVar1;
    return;
  default:
    FUN_10094174(3,DAT_1009c300,0x15d,DAT_1009c2fc,DAT_1009c2f8,param_2,param_3);
    return;
  }
  *(float *)(param_1 + 0x28) = fVar4;
  return;
}

