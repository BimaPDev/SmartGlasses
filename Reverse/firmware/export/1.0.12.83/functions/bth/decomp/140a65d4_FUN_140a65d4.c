/* FUN_140a65d4 @ 0x140a65d4 */

void FUN_140a65d4(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  FUN_140a5904(param_1,1);
  FUN_14036660(DAT_140a663c);
  if (param_2 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x145);
    uVar2 = *(undefined1 *)(param_2 + 0x146);
    uVar3 = *(undefined1 *)(param_2 + 0x147);
    uVar4 = *(undefined1 *)(param_2 + 0x144);
    uVar5 = *(undefined1 *)(param_2 + 0x148);
    uVar6 = FUN_140a65cc();
    FUN_14038ec0(uVar4,uVar1,uVar2,uVar3,uVar5,uVar6,*(undefined1 *)(param_2 + 0x149),
                 *(undefined1 *)(param_2 + 0x14a),*(undefined1 *)(param_2 + 0x14b),
                 *(undefined1 *)(param_2 + 0x14c),*(undefined2 *)(param_2 + 0x14e));
  }
  return;
}

