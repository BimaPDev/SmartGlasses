/* FUN_100f202c @ 0x100f202c */

undefined4 FUN_100f202c(uint param_1,undefined4 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int local_20;
  undefined4 local_1c;
  
  piVar4 = (int *)*DAT_100f20b8;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar4[1] + 0xc) == param_1) break;
    piVar4 = (int *)*piVar4;
  }
  uVar3 = piVar4[2];
  pcVar5 = (code *)piVar4[7];
  uVar1 = *(undefined2 *)(piVar4 + 2);
  uVar2 = *(undefined2 *)((int)piVar4 + 10);
  *param_2 = uVar3;
  param_2[1] = uVar3;
  if (pcVar5 != (code *)0x0) {
    local_20 = *(int *)(param_3 + 0x24);
    (*pcVar5)(param_1,&local_20,param_2);
    uVar1 = *(undefined2 *)(piVar4 + 2);
    uVar2 = *(undefined2 *)((int)piVar4 + 10);
  }
  local_20 = CONCAT22(uVar2,uVar1);
  local_1c = piVar4[3];
  FUN_1011e50a(&local_20,(int)*(short *)(param_2 + 1),(int)*(short *)((int)param_2 + 6));
  FUN_1011e560(&local_20,DAT_100f20bc);
  param_2[1] = local_20;
  return 0;
}

