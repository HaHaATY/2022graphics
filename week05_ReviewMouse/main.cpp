#include <GL/glut.h>
#include <stdio.h>
int N=0;
int x[1000],y[1000];
void display(){
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glPushMatrix();
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
            glVertex2f((x[i]-150)/150.0,-(y[i]-150)/150.0);
    }
    glEnd();
    glutSwapBuffers();
}
void mouse(int button,int state,int mouseX,int mouseY){
    if(state == GLUT_DOWN){
        N++;
        x[N-1]=mouseX;
        y[N-1]=mouseY;
        printf("�{�b���U�ƹ�,�o��s�y�� %d %d\n",x[N-1],y[N-1]);
    }
    display();
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("Week05 �Ʋ� Mouse");
    glutDisplayFunc( display );///���ѥΨӵe�Ϫ��禡
    glutMouseFunc(mouse);
    glutMainLoop();///�D�n���j��
    return 0;
}
