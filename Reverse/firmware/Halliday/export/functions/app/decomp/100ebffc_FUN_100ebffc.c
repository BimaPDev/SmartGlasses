/* FUN_100ebffc @ 0x100ebffc */

int * FUN_100ebffc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = DAT_100ec07c;
  piVar3 = *(int **)(DAT_100ec07c + 4);
  iVar2 = param_4;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_10138fca(1,param_3 + 0x40,DAT_100ec080,iVar2,param_4);
      if (piVar3 == (int *)0x0) {
        FUN_100a5b78((DAT_100ec088 - DAT_100ec084) * 0x20 & 0xff00U | 0x1fa0031,DAT_100ec090,
                     DAT_100ec08c,param_3);
        FUN_100ebda8();
        piVar4 = (int *)0x0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 4);
        piVar3[3] = 1;
        piVar4 = piVar3 + 0x10;
        *piVar3 = param_1;
        piVar3[1] = param_2;
        piVar3[2] = param_3 + 0x40;
        piVar3[8] = (int)piVar4;
        piVar3[0xf] = iVar2;
        *(int **)(iVar1 + 4) = piVar3;
      }
      return piVar4;
    }
    iVar2 = *piVar3;
    if ((iVar2 == param_1) && (iVar2 = piVar3[1], iVar2 == param_2)) break;
    piVar3 = (int *)piVar3[0xf];
  }
  piVar3[3] = piVar3[3] + 1;
  return (int *)piVar3[8];
}

