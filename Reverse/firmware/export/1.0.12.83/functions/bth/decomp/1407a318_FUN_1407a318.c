/* FUN_1407a318 @ 0x1407a318 */

undefined4 FUN_1407a318(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x7c) = param_3;
  pcVar3 = *(code **)(iVar2 + 0x80);
  uVar1 = FUN_140862b4(param_1 + 1);
  (*pcVar3)(uVar1,iVar2,0x19,param_1 + 1);
  return 0;
}

