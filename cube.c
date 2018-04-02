#include "g.h"
#define A 32
#define B 24
#define E glEnable
#define F glDisable
#define H 480
#define W 640
#define M 3.14159265358979323846
GLuint
  K[24]={0,1,2,3,4,5,6,7,5,3,2,6,4,7,1,0,7,6,2,1,4,0,3,5},
  T[8],
  a,b,u,v,h;
GLfloat
  LA[3]={.75,.75,.75},
  LD[3]={1,1,1},
  LP[3]={0,24,0},
  V[24]={-1,-1,1, 1,-1,1, 1,1,1, -1,1,1, -1,-1,-1, -1,1,-1, 1,1,-1, 1,-1,-1}, 
  N[24],
  X[3]={0,12,0},
  Y[3]={0,0,10},
  Z[3]={12,0,0},
  R[3]={36,12.25,27.04},
  S[B][B][B],
  C[4],
  rx,ry,rz,xa,xb,ya,yb,za,zb,t,m;
unsigned char *p,k,l,i,j,s,g;
char *q="           .                  .            .          .        .       .            .          .   .   .       .   . . . . .. ..";   
#define Q glBindTexture(3553, T[b-1]); glBegin(7); glTexCoord2f(0,1); glVertex2i(0, 0); glTexCoord2f(0,0); glVertex2i(0, H); glTexCoord2f(1,0); glVertex2i(W, H); glTexCoord2f(1,1); glVertex2i(W, 0); glEnd(); 
#define P(a) for(a=0;a<B;a++)
#define J(a,b) *(a) = 12 + 8 * b(t);
#define G F(2929); glBlendFunc(770,1); E(3042); F(16384); F(2896);
#define O glMatrixMode(5889); glLoadIdentity(); glOrtho( 0, W , H , 0, -1, 1 ); glMatrixMode(5888); glLoadIdentity();
#define I glClear(16640); glBindTexture(3553, 0); E(16384); E(2896); glMatrixMode( 5889 ); glLoadIdentity(); yb = 1. * tan((s?1.25:1)*M/8.); ya = -yb; xa = ya * 4 / 3.; xb = yb * 4 / 3.; glFrustum(xa,xb,ya,yb,1,0xFF);
#define U glMatrixMode( 5888 ); P(i) P(j) P(k) { xb = S[i][j][k]; if(xb > 0.001) { xb = (xb > 1)?1:(xb<0)?0:xb; glLoadIdentity(); glTranslatef(0,0,-35); glRotatef(rx,1,0,0); glRotatef(ry,0,1,0); glRotatef(rz,0,0,1); \
          glTranslatef(B-i*2,B-j*2,B-k*2); glScalef(xb, xb, xb); C[0]=C[1]=(1-xb)*.8+.05;C[2]=(1-xb)*.4+.2;C[3]=1; glMaterialfv(1028,5634,C); glVertexPointer(3, 5126, 0, V); glNormalPointer(5126, 0, N); \
	  glDrawElements(7, 24, 5125, K); \
	  }}
#define D I U
#define L(a,b) glViewport(0, 0, a, a); F(3042); E(2929); D glBindTexture(3553, T[b]); glCopyTexImage2D(3553, 0, 6409, 0, 0, a, a, 0);

int
main(int c,char **m){
  SDL_Event e;
 
  SDL_Init(32);

  SDL_SetVideoMode(W, H, 32, 536870919);
  SDL_WM_SetCaption("Cube by mooz",NULL);
  glClearColor (0, 0, 0, 0);
  glClearDepth (1);	

  E(2929 );
  glDepthFunc (515);
  glHint(3152, 4354);

  glEnableClientState(32884);
  glEnableClientState(32885);

  E(3553);
  E(2896);
  glShadeModel(7424);
  glLightfv(16384, 4608, LA);
  glLightfv(16384, 4609, LD);
  glLightfv(16384, 4611,LP);
  E(16384);

  for(i=0;i<24;++i) N[i] = V[i] / sqrt(3);

  glGenTextures(6, T);
  for(a=32,b=0;a<=256;a<<=1,++b) {
    glBindTexture(3553, T[b]);
    glTexImage2D(3553, 0, 4, a, a, 0,
		  GL_RGBA, 5121, 0);
    glTexParameteri(3553,10241,9729);
    glTexParameteri(3553,10240,9729);
  } h = u = SDL_GetTicks(); g = 0;s = 1;

  while (!SDL_PollEvent (&e) || (e.type != 2))
    {  
      t=((v=SDL_GetTicks())-u)*M/8e3;

      if((v-h) >= 64) {
	++g;
	g&=127;
	h=v;
	if(q[g] == '.') {
	  if(s)glPushAttrib(0xfffff);else glPopAttrib();	
	  s ^= 1;
	}
      }

      J(X,cos)J(Y,sin)
      J(Y+1,cos)J(Z+1,sin)
      J(X+2,cos)J(Z+2,sin)
      
      for(l=0; l<3; ++l)
	P(i) P(j) P(k) {
	if(!l)S[i][j][k]=0;
	xa=i-X[l];	
	ya=j-Y[l];
	za=k-Z[l];
	
	xb = xa*xa+ya*ya+za*za;

	if(xb < R[l]) {
	  yb = 1. - (xb / R[l]);
	  S[i][j][k] += 1.75 * yb * yb;
	}
      }
      

      if(s) {
     	L(32,0); G
	for(a=64,b=1; a<=256; a<<=1, ++b) {
	  glViewport(0, 0, a, a);
	  O glClear(16640); Q
	  glBindTexture(3553, T[b]);
	  glCopyTexImage2D(3553, 0, 6409, 0, 0, a, a, 0); 
	}

	F(3042);
	E(2929);
      
	glViewport(0, 0, 640, 480);
	
	D O G 
	  Q
      }
      else {
	L(128, 2);
	
	glViewport(0, 0, W, H);
      
	D O G xa = 0;	
	      xb = .1;
	ya = xb / B;
	yb = .01;
	glBindTexture(3553, T[2]);

	glBegin(7);
	P(i) {
	  glColor4f(1.0f, 1.0f, 1.0f, xb);
	  glTexCoord2f(xa,1-xa);
	  glVertex2f(0,0);
	  
	  glTexCoord2f(xa,xa);
	  glVertex2f(0,H);
	  
	  glTexCoord2f(1-xa,xa);
	  glVertex2f(W,H);
	  
	  glTexCoord2f(1-xa,1-xa);
	  glVertex2f(W,0);
	  
	  xa += yb;
	  xb -= ya;
	}
	glEnd();		
      }

      rx = t * 180. / M; ry = t * 190. / M + 20; rz = t * 165. / M - 15;

      glFlush ();
      SDL_GL_SwapBuffers ();
    }
  
  SDL_Quit();
  return 0;
}
