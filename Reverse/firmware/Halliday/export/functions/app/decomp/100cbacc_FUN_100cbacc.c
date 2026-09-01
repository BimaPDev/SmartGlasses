/* FUN_100cbacc @ 0x100cbacc */

void FUN_100cbacc(int param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint extraout_r2;
  undefined4 uVar5;
  uint extraout_r2_00;
  uint uVar6;
  uint extraout_r3;
  code *pcVar7;
  uint extraout_r3_00;
  undefined2 *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_1c;
  
  uVar3 = DAT_100cbb80;
  puVar2 = DAT_100cbb78;
  uVar9 = CONCAT44(param_2,param_1);
  uVar6 = (uint)*(byte *)(param_1 + 2);
  puVar8 = DAT_100cbb7c;
  iVar10 = param_1;
  local_1c = param_2;
  if (uVar6 == 2) {
    FUN_100e1eb0();
    return;
  }
  while( true ) {
    if (puVar2 < puVar8) {
      FUN_10119dc2(DAT_100cbb70,DAT_100cbb6c,uVar3,0x16d,uVar9,param_3,uVar6,iVar10);
      FUN_10119dc2(DAT_100cbb74);
      FUN_1011a1f0(uVar3,0x16d,param_3,uVar6);
    }
    if (puVar2 <= puVar8) break;
    uVar9 = (**(code **)(puVar8 + 2))(param_1,&local_1c);
    param_3 = extraout_r2;
    uVar6 = extraout_r3;
    if (-1 < (int)uVar9) {
      uVar1 = *puVar8;
      uVar5 = *(undefined4 *)(puVar8 + 4);
      *(undefined2 *)(local_1c + 0x50) = uVar1;
      *(undefined2 *)(local_1c + 0x5c) = uVar1;
      iVar4 = FUN_100cba10(param_1,local_1c,uVar5);
      if (iVar4 == 0) {
        return;
      }
      if ((code *)**(undefined4 **)(local_1c + 4) != (code *)0x0) {
        (*(code *)**(undefined4 **)(local_1c + 4))();
      }
      param_3 = *(uint *)(local_1c + 0x40) | 1;
      *(uint *)(local_1c + 0x40) = param_3;
      uVar9 = (ulonglong)local_1c;
      pcVar7 = *(code **)(*(int *)(local_1c + 4) + 0x18);
      uVar6 = 0;
      if (pcVar7 != (code *)0x0) {
        uVar9 = (*pcVar7)(local_1c,local_1c + 0x40);
        param_3 = extraout_r2_00;
        uVar6 = extraout_r3_00;
      }
    }
    puVar8 = puVar8 + 6;
  }
  return;
}

